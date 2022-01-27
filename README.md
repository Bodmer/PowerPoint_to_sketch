# PowerPoint_to_sketch
Create an Arduino Sketch from a VB macro in a PowerPoint presentation.

This PowerPoint presentation and the included VB macro is based on the work by [Kris Kasprzak here](https://github.com/KrisKasprzak/Powerpoint-ILI9341_t3).

The original VB macro created by Kris is part of the presentation, it has been expanded and enhanced with extra capabilities.

The example presentation creates an Arduino sketch that renders on a 480x320 TFT screen. This uses the fonts provided in the TFT_eSPI_ext library by Frank Boesing. Frank's library can be [downloaded here](https://github.com/FrankBoesing/TFT_eSPI_ext).

The first PowerPoint slide lists capabilities, this slide is not included in the generated sketch:

![PPT Slide 1](https://i.imgur.com/7EO7HqH.png)

Here is slide 2 as created in PowerPoint example:

![PPT Slide 2](https://i.imgur.com/7G1izHN.png)

Slide 2 as drawn by the created sketch and drawn on a 480x320 pixel TFT:

![TFT Slide 2](https://i.imgur.com/Ww4tvxh.png)

Slide 6 shows how variables can be included in tables:

![PPT Slide 6](https://i.imgur.com/7PIRVVX.png)

Slide 6 as drawn on TFT:

![TFT Slide 6](https://i.imgur.com/b5vd0zD.png)

Rounded rectangles in the PowerPoint slide create clickable "buttons" on the TFT:

![PPT Slide 7](https://i.imgur.com/4sLgpZ3.png)

Slide 7 as drawn on TFT by created sketch:

![TFT Slide 7](https://i.imgur.com/DN5tzQm.png)

[Here is the sketch](https://github.com/Bodmer/PowerPoint_to_sketch/blob/main/PowerPoint_Screens/PowerPoint_Screens.ino) that has been generated from the presentation by the VB macro.
