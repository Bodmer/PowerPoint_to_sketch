/*
This code was automatically generated from graphic elements in a PowerPoint presentation

Autogenerate code written by Kris Kasprzak kris.kasprzak@yahoo.com
Use this code without warranty

Rev  Date         Author     Desc
1.0  06/06/2020   Kasprzak   Initial code
1.1  08/01/2022   Bodmer     Adapted for TFT_eSPI

*/

// You will need to include the appropriate .h files for the fonts
// This example useds a combination of the stardard fonts that comes with the ILI9341_t3 and
// the custom fonts that come with ILI9341_Fonts library.

#include "font_Arial.h"
#include "font_ArialBold.h"
#include "font_ArialBoldItalic.h"
#include "font_ArialItalic.h"

#include <SPI.h>
#include "tft_font.h"
TFT_ext Display = TFT_ext();

// Rounded rectangles will be turned into Adafruit buttons
// add code for touch screen processing

TFT_eSPI_Button Button1;
char buttonLabel1[] = "Button";


void setup(){

Display.begin();

// use 1 or 3 for landscape mode
// you will have to experiment as displays are different
Display.setRotation(3);

Button1.initButton(&Display,263, 92, 84, 25,15012, 2016, 707, buttonLabel1, 2);

}

void loop(){


// function call for Screen1
Screen1();
delay(5000);


// function call for Screen2
Screen2();
delay(5000);

}

void Screen1(){


Display.fillScreen(65535);

// Rectangle 1
Display.drawRect(8, 17, 103, 20, 0);
// TextBox 2
// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(0);
Display.setTTFFont(Arial_8);
Display.setCursor(18, 2);
Display.print(F("drawRect"));

// Rectangle 4
Display.fillRect(9, 55, 102, 20, 0);
Display.fillRect(10, 56, 100, 18, 2016);
// TextBox 5
// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(0);
Display.setTTFFont(Arial_8);
Display.setCursor(23, 39);
Display.print(F("fillRect"));

// Rectangle 6
Display.fillRect(9, 92, 101, 56, 10897);
// note displays handle rotations differently so you may have to swap fillRectHGradient for fillRectVGradient
Display.fillRectVGradient(10, 93, 99, 54, 65408, 64448);
// TextBox 7
// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(0);
Display.setTTFFont(Arial_8_Bold);
Display.setCursor(15, 76);
Display.print(F("fillRectVGradient"));

// Rectangle 8
Display.fillRect(11, 167, 99, 41, 10897);
// note displays handle rotations differently so you may have to swap fillRectHGradient for fillRectVGradient
Display.fillRectHGradient(12, 168, 97, 39, 24593, 63488);
// TextBox 9
// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(0);
Display.setTTFFont(Arial_8_Italic);
Display.setCursor(16, 151);
Display.print(F("fillRectHGradient"));

// Oval 10
Display.fillEllipse(210, 61, 33, 15, 0x0);
Display.fillEllipse(210, 61, 32, 14, 0xFFE0);
// Oval 11
Display.drawEllipse(210, 23, 33, 15, 0xF800);
// Isosceles Triangle 3
Display.drawTriangle(123, 38, 178, 38, 150, 10, 65024);
// Isosceles Triangle 13
Display.fillTriangle(123, 75, 178, 75, 150, 47, 65024);
Display.drawTriangle(123, 75, 178, 75, 150, 47, 0);
Display.drawLine(278, 34, 297, 10, 63488);
Display.drawLine(278, 34, 297, 55, 2016);
Display.drawLine(278, 34, 252, 50, 31);
Display.drawLine(278, 34, 252, 10, 63519);
// TextBox 37
// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(0);
Display.setTTFFont(Arial_8);
Display.setCursor(263, 5);
Display.print(F("lines"));

// TextBox 38
Display.drawRect(118, 86, 83, 25, 31);
// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(63488);
Display.setTTFFont(Arial_8);
Display.setCursor(129, 92);
Display.print(F("Text box 1"));

// TextBox 39
Display.drawRect(118, 146, 83, 25, 31);
Display.fillRect(119, 147, 81, 23, 48631);
// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(63488);
Display.setTTFFont(Arial_8_Bold_Italic);
Display.setCursor(129, 151);
Display.print(F("Text box 3"));

// TextBox 40
Display.fillRect(118, 116, 83, 25, 48631);
// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(63488);
Display.setTTFFont(Arial_8_Bold);
Display.setCursor(129, 121);
Display.print(F("Text box 2"));

// TextBox 43
Display.drawRect(118, 204, 83, 25, 31);
// note displays handle rotations differently so you may have to swap fillRectHGradient for fillRectVGradient
Display.fillRectHGradient(119, 205, 81, 23, 63519, 31);
// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(65535);
Display.setTTFFont(Arial_8_Bold_Italic);
Display.setCursor(129, 210);
Display.print(F("Text box 5"));

// TextBox 44
// note displays handle rotations differently so you may have to swap fillRectHGradient for fillRectVGradient
Display.fillRectVGradient(118, 175, 83, 25, 65024, 63488);
// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(0);
Display.setTTFFont(Arial_8_Bold);
Display.setCursor(129, 180);
Display.print(F("Text box 4"));


Button1.drawButton();

}

void Screen2(){


Display.fillScreen(65109);

// Table 1
Display.drawFastHLine(65, 74, 194, 0);
Display.fillRect(65, 74, 61, 29, 60390);
// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(65535);
Display.setTTFFont(Arial_8_Bold);
Display.setCursor(75, 85 );
Display.print(F("int"));

Display.fillRect(126, 74, 65, 29, 60390);
// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(65535);
Display.setTTFFont(Arial_8_Bold);
Display.setCursor(136, 85 );
Display.print(F("float"));

Display.fillRect(191, 74, 68, 29, 60390);
// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(65535);
Display.setTTFFont(Arial_8_Bold);
Display.setCursor(201, 85 );
Display.print(F("char"));

Display.drawFastHLine(65, 103, 194, 0);
Display.fillRect(65, 103, 61, 29, 65405);
// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(0);
Display.setTTFFont(Arial_8);
Display.setCursor(75, 114 );
static int tab11 = 0;
Display.print(tab11);

Display.fillRect(126, 103, 65, 29, 65405);
// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(0);
Display.setTTFFont(Arial_8);
Display.setCursor(136, 114 );
static float tab21 = 0.00;
Display.print(tab21);

Display.fillRect(191, 103, 68, 29, 65405);
// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(0);
Display.setTTFFont(Arial_8);
Display.setCursor(201, 114 );
const char tab31[] = "Text";
Display.print(tab31);

Display.drawFastHLine(65, 132, 194, 0);
Display.fillRect(65, 132, 61, 29, 65535);
// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(0);
Display.setTTFFont(Arial_8);
Display.setCursor(75, 143 );
static int tab12 = 0;
Display.print(tab12);

Display.fillRect(126, 132, 65, 29, 65535);
// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(0);
Display.setTTFFont(Arial_8);
Display.setCursor(136, 143 );
static float tab22 = 0.00;
Display.print(tab22);

Display.fillRect(191, 132, 68, 29, 65535);
// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(0);
Display.setTTFFont(Arial_8);
Display.setCursor(201, 143 );
const char tab32[] = "Text";
Display.print(tab32);

Display.drawFastHLine(65, 161, 194, 0);
Display.fillRect(65, 161, 61, 29, 65405);
// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(0);
Display.setTTFFont(Arial_8);
Display.setCursor(75, 172 );
static int tab13 = 0;
tab13++;
Display.print(tab13);

Display.fillRect(126, 161, 65, 29, 65405);
// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(0);
Display.setTTFFont(Arial_8);
Display.setCursor(136, 172 );
static float tab23 = 0.00;
tab23+=1.23;
Display.print(tab23);

Display.fillRect(191, 161, 68, 29, 65405);
// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(0);
Display.setTTFFont(Arial_8);
Display.setCursor(201, 172 );
const char tab33[] = "Hello!";
Display.print(tab33);

Display.drawFastHLine(65, 190, 194, 0);
Display.drawFastHLine(65, 74, 194, 0);
Display.drawFastVLine(65, 74, 114, 0);
Display.drawFastVLine(126, 74, 114, 0);
Display.drawFastVLine(191, 74, 114, 0);
Display.drawFastVLine(259, 74, 114, 0);

// TextBox 2
// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(0);
Display.setTTFFont(Arial_14);
Display.setCursor(34, 27);
Display.print(F("Tables can contain variables"));



}
/*
End of the auto-generated code for ILI9341_t3 screens
*/
