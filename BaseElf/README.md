# BaseElf

A minimal Game Engine using [BaseFlux](https://github.com/ohmtal/BaseFlux/) as base for SDL3/ImGui/ResourceManager and ElfScript. It's also an enhanced example how to embed ElfScript.

This is a nice place to learn ElfScript (aka TorqueScipt ). 

![ScreenShot](./Screenshot_2026-07-22_01-36-32.png)

### Build this:

    cmake -S . -B build
    cmake --build build -j4
    ./BaseElf
    
Where -j4 means compile with 4 cores. 
    
### Examples:

As default assets/main.elf is loaded as initial script. Script main.elf is a module loader for the modules in assets/modules. I usually copy  assets/modules/blank.elf to a new file to get started. The modules are added on $MODULES in main.elf.

The **build in console** can be open with the GraveAccent (usually under ESC key). You can use TAB (shift TAB for backward) to autocomplete a command. 

Script Bindings are listed in assets/script_stub.elf.

### Command line parameters:

    --chdir /path/to/my/custom/assets/
    --script myScript.elf
      
Note: --script uses the set path by --chdir or default assets/ so if you call basic.elf for example you only do `--script basic.elf`.
        
### Basic Script 

    function onRender() {
        DrawText(80, 200 , "Congrats! You created your first window!", 2.0, GREEN);
    }
        
See also:

    - assets/minimal.elf
    - assets/basic.elf
        
### Script Editor for .elf

You can use every Text Editor you want. If you want syntax highlighting:
    
- Easy: In you Editor set the type to c#, javascript or c++
- VSCode/VSCodium: [Plugin](https://github.com/ohmtal/VSCode_TorqueScript)
    
In assets/script_stub.elf you find the current class, functions and constants definitions. Some editors (like vim) allow autocomplete when the file is loaded in background. 

## Console Power ShowCase: 

Start BaseFlux. Open Console with GraveAccent key (usually left from 1 key under ESC). 
Paste:

    function onRender() { DrawCircle(500,300,20,YELLOW);}
    
now you see you have overwritten the render loop. And a Yellow Circle is drawn at 500,300 with radius 20px. We modifiy it a bit a make the radius variable with a global variable called $rad:
    
    function onRender() { DrawCircle(500,300,$rad,YELLOW);}
    
Because $rad is emtpy (== 0) the circle is invisible so we enter:

    $rad = 100;

I want to add a growing circle so we enter in console: 

    function grow() { $rad = $rad + 10; if ($rad > 500) $rad = 10; }
    
You have added a new function which add 10 to the global $rad variable until it's > 500 then $rad will be 10 again. Since $rad is set in DrawCircle you now can grow it:

    grow();
    
Manually is fine but automatically is better ;) So we overwrite the function onUpdate(%dt) which is called by engine:

    function onUpdate(%dt) { grow(); }
    
So you should see a pumping yellow circle :) To modify every thing in the console is one of the reason i love Elf(Torque)Script. 

I want to add a nicer grow shrink so i overwrite grow again

    function grow() { $rad = $rad + $value; if ($rad > 50 || $rad < 1 ) $value *= -1; }
    
now $value is control it and max rad is 50. Value is empty so nothing happen. You need to set it. Also $rad can be too big so we adjust it also:

    $value = 0.1; $rad = 10;

finally i want to make change the color of the circle so we need to overwrite render again:

     function onRender() { DrawCircle(500,300,$rad,"255 0 128");}
     
Color is set by a RGB Value "255 255 0" => full red, no green half blue - should be pink now. Btw. cursor up in console get the last command back. 

Happy Scripting. 
    
    
### Related projects:

- [Raylib-ElfScript bindings](https://github.com/ohmtal/raylib-elfscript)
- [ElfFlux Raylib-ElfScript + Objects](https://github.com/ohmtal/ElfFlux)
- [Ohmflux ElfTest](https://github.com/ohmtal/OhmFlux/tree/main/ElfTest)
