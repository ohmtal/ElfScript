# Dev Console

dk console  heavily modified for raylib-elfscript. Still not very good but usable
as long i do not write my own or imgui is included like in ElfFlux. 

---

ElfScript: ConsoleGuiObject usage example: 

On Init: 

```
    %this.ConsoleGui = singleton ConsoleGuiObject();
    %this.ConsoleFont= LoadFontEx("assets/font/JetBrainsMono-Regular.ttf", 16, 0, 250);
    %this.ConsoleGui.setFont( %this.ConsoleFont);
    %this.ConsoleGui.heightDiv = 2; //must be set here !!
    %this.ConsoleGui.fontsize = 16.0; //must be set here !!
```

In Render Loop:

```
%this.ConsoleGui.update();
```


---

[original dk console](https://github.com/dkvilo/dk_console)

