echo("Hello from Test.cs");
// exec("./test2.cs");

function rl(%mode) {
    exec("./test.cs");

    if (%mode !$= "") {
        $mode = %mode;
        $i = $times = 0;
    }
}


// benchmark
$foo = new TestObject() {
    bar = 0.0;
    TypeF32 myFloat = 0.0;
};

function setMy() {
    $foo.myFloat = 2.2;
}

#define LOOP_COUNT 50000

$mode = -1;

function SpeedTest() {
    %lF32 = 0.0;
    %lS32 = 0;

    //  --- count up a member without TYPEDEF ---
    // .. object as global var
    if ( $mode == 0 ) {
        for (%i =0 ; %i < LOOP_COUNT; %i++) {
            $foo.bar += 0.1;
        }
    }
    else
    // .. object as local var
    if ( $mode == 1 ) {
        %foo = $foo;
        for (%i =0 ; %i < LOOP_COUNT; %i++) {
            %foo.bar += 0.1;
        }
    }
    else
    // .. object as local var + typed
    if ( $mode == 2 ) {
        %foo = $foo;
        for (%i =0 ; %i < LOOP_COUNT; %i++) {
            //NOTE Why is + - slower than * / ??

            // %foo.myFloat = 0.1; // 65ms
            // %foo.myFloat += 0.1; // 90ms
            // %foo.myFloat *= 0.1; //70ms
            // %foo.myFloat /= 0.1; //70ms
            // %foo.myFloat -= 0.1; //90ms
            %foo.myFloat =  %foo.myFloat * 0.1; //86ms
        }
    }
    // ------ working on engine defined properties --------
    else
    // .. object as local var + set X
    // NOTE: OMG is this slow !!!!!!!
    if ( $mode == 3 ) {
        %foo = $foo;
        for (%i =0 ; %i < LOOP_COUNT; %i++) {
            // THIS MUST BE A BUG !!! .x is slow like hell while myFloat is ok
            // -- x,y,z,w,r,g,b,a are defined in parser ---
            // 600 ms for this .... omg
            // %foo.x += 0.1; //NOTE VERY VERY SLOW

            // BUG testFloat is 600ms!!!
            // so its not the .x
            // %foo.testFloat *=   0.1;

            //NOTE Verified its not my ELFSCRIPT_STRICT_SLOT_TYPE

            // %testFloat = %foo.testFloat; //alone 60ms
            // %testFloat *= 0.1;
            // // !!!!!!!!!!!!1 THIS IT IS !!!!!!!!!!!!!!!!!!!!
            // %foo.testFloat = %testFloat;

            %foo.testFloat +=   0.1;

        }
    }
    else
    // .. object as local var + call walk
    if ( $mode == 4 ) {
        %foo = $foo;
        for (%i =0 ; %i < LOOP_COUNT; %i++) {
            %foo.walk(0.1, 0.4, 0.2); //NOTE FAST! 50-60ms
        }
    }
    // .. object as local var + call getPos to a local var
    if ( $mode == 5 ) {
        %foo = $foo;
        for (%i =0 ; %i < LOOP_COUNT; %i++) {
            %posVec = %foo.getPos(); //not bad 111ms
        }
    }
     // .. object as local var + call getx/y/z to a local vars
    if ( $mode == 6 ) {
        %foo = $foo;
        for (%i =0 ; %i < LOOP_COUNT; %i++) {
            // NOTE a bit slower than getPos: 122ms
            %x = %foo.getX();
            %y = %foo.getY();
            %z = %foo.getZ();
        }
    }


}


$i = 0; $times = 0;
// called from c++ mainloop
function MainLoop() {

    if ($mode >= 0) {
        $i++;
        $times += GetFrameTime();
        if ($i >= 10) {
            $i -= 10;
            echo("Speedtest MODE:" SPC $mode SPC "avg time:" SPC $times / 10);
            $times = 0;
        }
    }
    SpeedTest();

}
