package OGE3DSpeedTest
{

function TestLocalVar() {

  $JLOOPS = 25;
  $ILOOPS = 1000000;

  %sum = 0;
  for (%j = 0; %j < $JLOOPS; %j++) {
    for (%i = 0; %i < $ILOOPS; %i++) {
      %sum ++;
    }
    echo("SUM (++) IS:" SPC %sum);
    for (%i = 0; %i < $ILOOPS; %i++) {
      %sum --;
    }
    echo("SUM (--) IS:" SPC %sum);
    %sum = 66;
    echo("set Sum to 66 == " SPC %sum * 1);
    for (%i = 0; %i < $ILOOPS; %i++) {
      %sum *= %i + 1;
      %sum /= %i + 1;
    }
    echo("SUM (*/ %i+1) IS:" SPC %sum);
    for (%i = 0; %i < $ILOOPS / 2.0; %i++) {
      %ran = getRandomF(%i);
      %sum -= %ran;
      %sum += %ran;
    }
    echo("SUM (rand +-) IS:" SPC %sum);
  }
  %sum -= 66.0 ;
  echo("---------------------");
  echo("---------------------");
  echo("Final sum should be 0 == ", %sum);
  echo("---------------------");
  echo("---------------------");

}

function testGlobalVar() {

  $JLOOPS = 25;
  $ILOOPS = 1000000;

  $sum = 0;
  for (%j = 0; %j < $JLOOPS; %j++) {
    for (%i = 0; %i < $ILOOPS; %i++) {
      $sum ++;
    }
    echo("SUM (++) IS:" SPC $sum);
    for (%i = 0; %i < $ILOOPS; %i++) {
      $sum --;
    }
    echo("SUM (--) IS:" SPC $sum);
    $sum = 66;
    echo("set Sum to 66 == " SPC $sum * 1);
    for (%i = 0; %i < $ILOOPS; %i++) {
      $sum *= %i + 1;
      $sum /= %i + 1;
    }
    echo("SUM (*/ %i+1) IS:" SPC $sum);
    for (%i = 0; %i < $ILOOPS / 2.0; %i++) {
      %ran = getRandomF(%i);
      $sum -= %ran;
      $sum += %ran;
    }
    echo("SUM (rand +-) IS:" SPC $sum);
  }
  $sum -= 66.0 ;
  echo("---------------------");
  echo("---------------------");
  echo("Final sum should be 0 == ", $sum);
  echo("---------------------");
  echo("---------------------");

}

function testDynamicField() {

  $JLOOPS = 25;
  $ILOOPS = 1000000;

  new ScriptObject(sto);

  sto.dynX = 0;
  for (%j = 0; %j < $JLOOPS; %j++) {
    for (%i = 0; %i < $ILOOPS; %i++) {
      sto.dynX ++;
    }
    echo("SUM (++) IS:" SPC sto.dynX);
    for (%i = 0; %i < $ILOOPS; %i++) {
      sto.dynX --;
    }
    echo("SUM (--) IS:" SPC sto.dynX);
    sto.dynX = 66;
    echo("set Sum to 66 == " SPC sto.dynX * 1);
    for (%i = 0; %i < $ILOOPS; %i++) {
      sto.dynX *= %i + 1;
      sto.dynX /= %i + 1;
    }
    echo("SUM (*/ %i+1) IS:" SPC sto.dynX);
    for (%i = 0; %i < $ILOOPS / 2.0; %i++) {
      %ran = getRandomF(%i);
      sto.dynX -= %ran;
      sto.dynX += %ran;
    }
    echo("SUM (rand +-) IS:" SPC sto.dynX);
  }
  sto.dynX -= 66.0 ;
  echo("---------------------");
  echo("---------------------");
  echo("Final sum should be 0 == ", sto.dynX);
  echo("---------------------");
  echo("---------------------");

}

function testStaticField() {

  $JLOOPS = 25;
  $ILOOPS = 1000000;

  new tom2DSprite(sto);

  sto.x = 0;
  for (%j = 0; %j < $JLOOPS; %j++) {
    for (%i = 0; %i < $ILOOPS; %i++) {
      sto.x ++;
    }
    echo("SUM (++) IS:" SPC sto.x);
    for (%i = 0; %i < $ILOOPS; %i++) {
      sto.x --;
    }
    echo("SUM (--) IS:" SPC sto.x);
    sto.x = 66;
    echo("set Sum to 66 == " SPC sto.x * 1);
    for (%i = 0; %i < $ILOOPS; %i++) {
      sto.x *= %i + 1;
      sto.x /= %i + 1;
    }
    echo("SUM (*/ %i+1) IS:" SPC sto.x);
    for (%i = 0; %i < $ILOOPS / 2.0; %i++) {
      %ran = getRandomF(%i);
      sto.x -= %ran;
      sto.x += %ran;
    }
    echo("SUM (rand +-) IS:" SPC sto.x);
  }
  sto.x -= 66.0 ;
  echo("---------------------");
  echo("---------------------");
  echo("Final sum should be 0 == ", sto.x);
  echo("---------------------");
  echo("---------------------");

}
function onStart()
{

   $Con::logBufferEnabled=false;
   enableWinConsole(true);
   Parent::onStart();
   //.........................................................................
    testLocalVar();
   // testGlobalVar();
    // testDynamicField();
   // testStaticField();

   //.........................................................................
   quit();
}
function onExit()
{
   echo("\tOGE3DSpeedTest shutting down...");

//   echo("Exporting server prefs");
//   export("$Pref::Server::*", "./server/prefs.cs", False);

   Parent::onExit();
}

}; // end package

// Activate our custom package, which in turn loads our custom versions
activatePackage(OGE3DSpeedTest);



