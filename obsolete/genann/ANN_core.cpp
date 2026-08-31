//-----------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
// Core: Genann ElfScript Bindings
//-----------------------------------------------------------------------------
#include <SDL3/SDL.h>

#include "console/scriptPreprocessor.h"
#include "console/engineAPI.h"
#include "console/consoleExtras.h"

#include "ANN_core.h"

#define ANN_MAXINPUTS 100000
#define ANN_MAXOUTPUTS 100

namespace ElfAi {

void InitANN() {

}
void ShutDownANN() {
    GenannMap.clear();
}
// -----------------------------------------------------------------------------
DefineEngineFunction(ANN_Create, S32, (S32 inputs, S32 hidden_layers, S32 hidden_neuros, S32 outputs ),
                     , "Create a new KI and return the ID of it. Max four inputs/outputs") {

    if (inputs < 1 || inputs > ANN_MAXINPUTS || outputs < 1 || outputs > ANN_MAXOUTPUTS) {
        Con::errorf("ANN_Create - Sorry we support only max. %d inputs and max %d outputs.", ANN_MAXINPUTS, ANN_MAXOUTPUTS);
        return 0;
    }

    if (hidden_layers < 1 || hidden_neuros < 1) {
        Con::errorf("ANN_Create - Hidden Layers and Hidden Neurons must be at least one.");
        return 0;
    }
    genann* ann = genann_init(inputs,  hidden_layers, hidden_neuros, outputs);
    if (!ann) return 0;
    return GenannMap.add(ann);
}
// -----------------------------------------------------------------------------
DefineEngineFunction(ANN_Destroy, void, (S32 kiObjectID), , "Destroy an KI and remove it.") {
    GenannMap.remove(kiObjectID);
}
// -----------------------------------------------------------------------------
DefineEngineFunction(ANN_Train, bool, (S32 kiObjectID, ConsoleVector inputVector, ConsoleVector desiredOutputVector, F64 learning_rate),
                     , "Train the KI with an input and the desired output." ) {
    genann** annPrt = GenannMap.get(kiObjectID);
    if (!annPrt || !*annPrt) {
        Con::errorf("ANN_Train: Invalid KiObjectID: %d", kiObjectID);
        return false;
    }
    genann *ann = *annPrt;

    if (ann->inputs > ANN_MAXOUTPUTS || ann->outputs > ANN_MAXOUTPUTS ) {
        Con::errorf("ANN_Train - Network Dimension overflow! Inputs %d of %d Outputs %d  must be max %!",
                    ann->inputs, ann->outputs);
        return false;
    }

    double inputs[4];
    double desired_outputs[4];
    for (S32 i = 0; i < 4; i++) {
        inputs[i] = (F64)inputVector.points[i];
        desired_outputs[i] = (F64)desiredOutputVector.points[i];
    }
    genann_train(ann, inputs, desired_outputs, learning_rate);
    return true;
}
// -----------------------------------------------------------------------------
DefineEngineFunction(ANN_Run, ConsoleVector, (S32 kiObjectID, ConsoleVector inputVector),
        , "Run prediction with a 4-float vector") {
    genann** annPrt = GenannMap.get(kiObjectID);
    if (!annPrt || !*annPrt) {
        Con::errorf("ANN_Run: Invalid KiObjectID: %d", kiObjectID);
        return {0};
    }
    genann *ann = *annPrt;

    if (ann->inputs > 4 || ann->outputs > 4 ) {
        Con::errorf("ANN_Run: Network Dimension overflow! Inputs(%d) Outputs(%d) must be max 4!"
            , ann->inputs, ann->outputs);
        return {0};
    }

    double inputs[4];

    for (S32 i = 0; i < 4; i++) {
        inputs[i] = (F64)inputVector.points[i];
    }

    const F64 *prediction = genann_run(ann, inputs);
    ConsoleVector result = {};
    for (S32 i = 0; i < ann->outputs; i++) {
        result.points[i] = (F32) prediction[i];
    }

    return result;
}
// -----------------------------------------------------------------------------
DefineEngineFunction(ANN_Save, bool, (S32 kiObjectID, String filename), , "Save KI state to a file. Returns true on success.") {
    genann **annPtr = GenannMap.get(kiObjectID);
    if (!annPtr || !*annPtr) {
        Con::errorf("ANN_Save: Invalid KiObjectID: %d", kiObjectID);
        return false;
    }
    genann *ann = *annPtr;

    if (!filename || filename[0] == '\0') {
        Con::errorf("ANN_Save: Invalid filename!");
        return false;
    }

    FILE *out = fopen(filename, "w");
    if (!out) {
        Con::errorf("ANN_Save - failed to open file: %s", filename.c_str());
        return false;
    }

    genann_write(ann, out);

    if (ferror(out)) {
        Con::errorf("ANN_Save: failed to write to file: %s", filename.c_str());
        fclose(out);
        return false;
    }

    fclose(out);
    return true;
}

DefineEngineFunction(ANN_Load, S32, (String filename, ConsoleVector validateSettings),
        , "Load a KI from a file and return its new ID. Returns 0 on failure.\n"
          "validateSettings is {S32 inputs, S32 hidden_layers, S32 hidden, S32 outputs}") {
    if (!filename || filename[0] == '\0') {
        Con::errorf("ANN_Load: invalid filename!");
        return 0;
    }

    FILE *in = fopen(filename, "r");
    if (!in) {
        Con::errorf("ANN_Load: failed to open file: %s for read.", filename.c_str());
        return 0;
    }
    genann *ann = genann_read(in);
    fclose(in);
    if (!ann) {
        Con::errorf("ANN_Load: invalid file format detected: %s", filename.c_str());
        return 0;
    }

    bool validateOK = true;
    String errors = "Load File validation failed:\n";
    if (ann->inputs != (S32) validateSettings.points[0]) {
        errors = errors + "Inputs missmatch\n";
        validateOK = false;
    }
    if (ann->hidden_layers != (S32) validateSettings.points[1]) {
        errors = errors + "Hidden Layers missmatch\n";
        validateOK = false;
    }
    if (ann->hidden != (S32) validateSettings.points[2]) {
        errors = errors + "Hidden Neurons missmatch\n";
        validateOK = false;
    }
    if (ann->outputs != (S32) validateSettings.points[3]) {
        errors = errors + "Outputs missmatch\n";
        validateOK = false;
    }

    if (!validateOK) {
        Con::errorf("ANN_Load: %s", errors.c_str());
        genann_free(ann);
        return 0;
    }

    return GenannMap.add(ann);
}


}//namespace ElfAi
