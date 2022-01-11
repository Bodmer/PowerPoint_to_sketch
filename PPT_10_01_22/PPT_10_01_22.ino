/*
This code was automatically generated from graphic elements in a PowerPoint presentation
Generated: 11 January 2022 02:12:59
  Version: 1.0.4
Original autogenerate code written by Kris Kasprzak kris.kasprzak@yahoo.com
Use this code without warranty

Rev    Date         Author     Desc
1.0    06/06/2020   Kasprzak   Initial code
1.0.x  08/01/2022   Bodmer     Adapted for TFT_eSPI

*/

// You will need to include the appropriate .h files for the fonts
// This example useds a combination of the stardard fonts that comes with the ILI9341_t3 and
// the custom fonts that come with ILI9341_Fonts library.

#include "font_Arial.h"
#include "font_ArialBold.h"
#include "font_ArialItalic.h"
#include "font_ArialBoldItalic.h"

#include <SPI.h>
#include <TFT_eSPI.h>
#include "tft_font.h"
TFT_ext tft = TFT_ext();

// Rounded rectangles will be turned into Adafruit buttons
// add code for touch screen processing

TFT_eSPI_Button Button1;
char buttonLabel1[] = "Button";
TFT_eSPI_Button Button2;
char buttonLabel2[] = "SETUP";


void setup(){

  tft.begin();

  // use 1 or 3 for landscape mode
  // you will have to experiment as displays are different
  tft.setRotation(3);

  Button1.initButton(&tft,394, 122, 125, 33,15012, 2016, 707, buttonLabel1, 2);
  Button2.initButton(&tft,400, 30, 141, 43,65535, 10836, 65535, buttonLabel2, 2);

}

void loop(){


  // function call for Screen1
  Screen1();
  delay(5000);


  // function call for Screen2
  Screen2();
  delay(5000);


  // function call for Screen3
  Screen3();
  delay(5000);


  // function call for Screen4
  Screen4();
  delay(5000);

}

void Screen1(){


  tft.fillScreen(65535);

  // Rectangle 1
  tft.drawRect(12, 23, 155, 26, 0);
  // TextBox 2
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(0);
  tft.setTTFFont(Arial_12);
  tft.setCursor(25, 7);
  tft.print(F("drawRect"));

  // Rectangle 4
  tft.fillRect(14, 73, 153, 26, 0);
  tft.fillRect(15, 74, 151, 24, 2016);
  // TextBox 5
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(0);
  tft.setTTFFont(Arial_12);
  tft.setCursor(33, 56);
  tft.print(F("fillRect"));

  // Rectangle 6
  tft.fillRect(14, 123, 151, 75, 10897);
  // note displays handle rotations differently so you may have to swap fillRectHGradient for fillRectVGradient
  tft.fillRectVGradient(15, 124, 149, 73, 65408, 64448);
  // TextBox 7
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(0);
  tft.setTTFFont(Arial_11_Bold);
  tft.setCursor(20, 105);
  tft.print(F("fillRectVGradient"));

  // Rectangle 8
  tft.fillRect(16, 222, 149, 55, 10897);
  // note displays handle rotations differently so you may have to swap fillRectHGradient for fillRectVGradient
  tft.fillRectHGradient(17, 223, 147, 53, 24593, 63488);
  // TextBox 9
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(0);
  tft.setTTFFont(Arial_12_Italic);
  tft.setCursor(23, 205);
  tft.print(F("fillRectHGradient"));

  // Oval 10
  tft.fillEllipse(315, 81, 49, 20, 0x0);
  tft.fillEllipse(315, 81, 48, 19, 0xFFE0);
  // Oval 11
  tft.drawEllipse(315, 31, 49, 20, 0xF800);
  // Isosceles Triangle 3
  tft.drawTriangle(184, 51, 266, 51, 225, 13, 65024);
  // Isosceles Triangle 13
  tft.fillTriangle(184, 100, 266, 100, 225, 62, 65024);
  tft.drawTriangle(184, 100, 266, 100, 225, 62, 0);
  tft.drawLine(417, 45, 446, 13, 63488);
  tft.drawLine(417, 45, 446, 73, 2016);
  tft.drawLine(418, 45, 378, 67, 31);
  tft.drawLine(418, 45, 378, 13, 63519);
  // TextBox 37
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(0);
  tft.setTTFFont(Arial_16);
  tft.setCursor(390, 9);
  tft.print(F("lines"));

  // TextBox 38
  tft.drawRect(177, 115, 125, 35, 31);
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(63488);
  tft.setTTFFont(Arial_12);
  tft.setCursor(191, 126);
  tft.print(F(" Text box 1"));

  // TextBox 39
  tft.drawRect(177, 194, 125, 35, 31);
  tft.fillRect(178, 195, 123, 33, 48631);
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(63488);
  tft.setTTFFont(Arial_12_Bold_Italic);
  tft.setCursor(191, 205);
  tft.print(F("Text box 3"));

  // TextBox 40
  tft.fillRect(177, 154, 125, 35, 48631);
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(63488);
  tft.setTTFFont(Arial_12_Bold);
  tft.setCursor(191, 166);
  tft.print(F(" Text box 2"));

  // TextBox 43
  tft.drawRect(177, 272, 125, 35, 31);
  // note displays handle rotations differently so you may have to swap fillRectHGradient for fillRectVGradient
  tft.fillRectHGradient(178, 273, 123, 33, 63519, 31);
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(65535);
  tft.setTTFFont(Arial_12_Bold_Italic);
  tft.setCursor(191, 283);
  tft.print(F(" Text box 5"));

  // TextBox 44
  // note displays handle rotations differently so you may have to swap fillRectHGradient for fillRectVGradient
  tft.fillRectVGradient(177, 233, 125, 35, 65024, 63488);
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(0);
  tft.setTTFFont(Arial_12_Bold);
  tft.setCursor(191, 244);
  tft.print(F(" Text box 4"));

  tft.drawLine(359, 164, 359, 100, 17304);
  tft.drawLine(428, 164, 428, 94, 17304);

  tft.setTTFFont(Arial_18);
  Button1.drawButton();

}

void Screen2(){


  tft.fillScreen(65535);

  // Table 1
  tft.drawFastHLine(54, 75, 346, 0);
  tft.fillRect(54, 75, 111, 41, 60390);
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(65535);
  tft.setTTFFont(Arial_12_Bold);
  tft.setCursor(70, 88 );
  tft.print(F("  integer"));

  tft.fillRect(165, 75, 117, 41, 60390);
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(65535);
  tft.setTTFFont(Arial_12_Bold);
  tft.setCursor(181, 88 );
  tft.print(F("    float"));

  tft.fillRect(282, 75, 118, 41, 60390);
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(65535);
  tft.setTTFFont(Arial_12_Bold);
  tft.setCursor(298, 88 );
  tft.print(F("     char"));

  tft.drawFastHLine(54, 116, 346, 0);
  tft.fillRect(54, 116, 111, 41, 65405);
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(0);
  tft.setTTFFont(Arial_12);
  tft.setCursor(70, 129 );
  static int tab11 = 0;
  tft.print(tab11);

  tft.fillRect(165, 116, 117, 41, 65405);
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(0);
  tft.setTTFFont(Arial_12);
  tft.setCursor(181, 129 );
  static float tab21 = 0.00;
  tft.print(tab21);

  tft.fillRect(282, 116, 118, 41, 65405);
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(0);
  tft.setTTFFont(Arial_12);
  tft.setCursor(298, 129 );
  const char tab31[] = "Text";
  tft.print(tab31);

  tft.drawFastHLine(54, 157, 346, 0);
  tft.fillRect(54, 157, 111, 41, 65535);
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(0);
  tft.setTTFFont(Arial_12);
  tft.setCursor(70, 170 );
  static int tab12 = 0;
  tft.print(tab12);

  tft.fillRect(165, 157, 117, 41, 65535);
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(0);
  tft.setTTFFont(Arial_12);
  tft.setCursor(181, 170 );
  static float tab22 = 0.00;
  tft.print(tab22);

  tft.fillRect(282, 157, 118, 41, 65535);
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(0);
  tft.setTTFFont(Arial_12);
  tft.setCursor(298, 170 );
  const char tab32[] = "Text";
  tft.print(tab32);

  tft.drawFastHLine(54, 198, 346, 0);
  tft.fillRect(54, 198, 111, 41, 65405);
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(0);
  tft.setTTFFont(Arial_12);
  tft.setCursor(70, 211 );
  static int tab13 = 0;
  tft.print(tab13);

  tft.fillRect(165, 198, 117, 41, 65405);
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(0);
  tft.setTTFFont(Arial_12);
  tft.setCursor(181, 211 );
  static float tab23 = 0.00;
  tft.print(tab23);

  tft.fillRect(282, 198, 118, 41, 65405);
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(0);
  tft.setTTFFont(Arial_12);
  tft.setCursor(298, 211 );
  const char tab33[] = "Text";
  tft.print(tab33);

  tft.drawFastHLine(54, 239, 346, 0);
  tft.drawFastHLine(54, 75, 346, 0);
  tft.drawFastVLine(54, 75, 164, 0);
  tft.drawFastVLine(165, 75, 164, 0);
  tft.drawFastVLine(282, 75, 164, 0);
  tft.drawFastVLine(400, 75, 164, 0);

  // TextBox 2
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(0);
  tft.setTTFFont(Arial_20);
  tft.setCursor(50, 44);
  tft.print(F("Tables can contain variables"));

  tft.drawLine(0, 319, 242, 0, 17304);
  tft.drawLine(242, 0, 479, 319, 17304);
  tft.drawLine(479, 320, 0, 160, 17304);
  tft.drawLine(0, 160, 479, 0, 17304);
  tft.drawLine(0, 0, 235, 319, 17304);
  tft.drawLine(235, 319, 479, 0, 17304);
  tft.drawLine(0, 0, 479, 160, 17304);
  tft.drawLine(479, 160, 0, 320, 17304);


}

void Screen3(){


  tft.fillScreen(65535);

  // Rectangle 2
  tft.drawRect(62, 41, 42, 14, 2016);
  // TextBox 3
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(0);
  tft.setTTFFont(Arial_8);
  tft.setCursor(63, 44);
  tft.print(F("Arial 8pt"));

  // TextBox 4
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(0);
  tft.setTTFFont(Arial_10);
  tft.setCursor(63, 58);
  tft.print(F("Arial 10pt"));

  // TextBox 5
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(0);
  tft.setTTFFont(Arial_12);
  tft.setCursor(63, 78);
  tft.print(F("Arial 12pt"));

  // TextBox 6
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(0);
  tft.setTTFFont(Arial_14);
  tft.setCursor(63, 101);
  tft.print(F("Arial 14pt"));

  // TextBox 7
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(0);
  tft.setTTFFont(Arial_18);
  tft.setCursor(63, 129);
  tft.print(F("Arial 18pt"));

  // TextBox 8
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(0);
  tft.setTTFFont(Arial_24);
  tft.setCursor(63, 161);
  tft.print(F("Arial 24pt"));

  // TextBox 9
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(0);
  tft.setTTFFont(Arial_32);
  tft.setCursor(63, 203);
  tft.print(F("Arial 32pt"));

  // Rectangle 10
  tft.drawRect(62, 57, 59, 14, 2016);
  // Rectangle 11
  tft.drawRect(62, 77, 72, 17, 2016);
  // Rectangle 12
  tft.drawRect(62, 99, 85, 22, 2016);
  // Rectangle 13
  tft.drawRect(62, 127, 108, 27, 2016);
  // Rectangle 14
  tft.drawRect(62, 160, 141, 31, 2016);
  // Rectangle 15
  tft.drawRect(62, 201, 189, 44, 2016);


}

void Screen4(){


  tft.fillScreen(0);

  // TextBox 2
  tft.fillRect(0, 0, 479, 60, 14791);
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(65535);
  tft.setTTFFont(Arial_20_Bold);
  tft.setCursor(6, 21);
  tft.print(F("HOME AUTOMATION"));

  // Rectangle 5
  // note displays handle rotations differently so you may have to swap fillRectHGradient for fillRectVGradient
  tft.fillRectHGradient(13, 78, 220, 228, 2145, 19049);
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(65535);
  tft.setTTFFont(Arial_18_Bold);
  tft.setCursor(13, 84);
  tft.print(F("TIME"));

  // Rectangle 11
  // note displays handle rotations differently so you may have to swap fillRectHGradient for fillRectVGradient
  tft.fillRectHGradient(245, 78, 110, 230, 2145, 19049);
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(65535);
  tft.setTTFFont(Arial_18_Bold);
  tft.setCursor(245, 84);
  tft.print(F("TEMP"));

  // Rectangle 12
  // note displays handle rotations differently so you may have to swap fillRectHGradient for fillRectVGradient
  tft.fillRectHGradient(361, 78, 110, 230, 2145, 19049);
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(65535);
  tft.setTTFFont(Arial_18_Bold);
  tft.setCursor(361, 84);
  tft.print(F("%RH"));

  // TextBox 19
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(65535);
  tft.setTTFFont(Arial_18);
  tft.setCursor(21, 107);
  const char timeNow[] = "Text";
  tft.print(timeNow);

  // TextBox 27
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(65535);
  tft.setTTFFont(Arial_18);
  tft.setCursor(257, 165);
  static float tmax = 0.00;
  tft.print(tmax);

  // TextBox 29
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(65535);
  tft.setTTFFont(Arial_18);
  tft.setCursor(259, 286);
  static float tnow = 0.00;
  tft.print(tnow);

  // TextBox 30
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(65535);
  tft.setTTFFont(Arial_18);
  tft.setCursor(373, 286);
  static int rhnow = 0;
  tft.print(rhnow);

  // Table 8
  tft.drawFastHLine(12, 136, 220, 65535);
  tft.fillRect(12, 136, 112, 43, 268);
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(65535);
  tft.setTTFFont(Arial_13_Bold);
  tft.setCursor(23, 148 );
  tft.print(F("Door"));

  tft.fillRect(124, 136, 109, 43, 268);
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(65535);
  tft.setTTFFont(Arial_13_Bold);
  tft.setCursor(135, 148 );
  tft.print(F("Status"));

  tft.drawFastHLine(12, 179, 220, 65535);
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(65535);
  tft.setTTFFont(Arial_13);
  tft.setCursor(18, 186 );
  tft.print(F("Front"));

  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(63488);
  tft.setTTFFont(Arial_13);
  tft.setCursor(130, 186 );
  const char frontStat[] = "Text";
  tft.print(frontStat);

  tft.drawFastHLine(12, 204, 220, 65535);
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(65535);
  tft.setTTFFont(Arial_13);
  tft.setCursor(18, 211 );
  tft.print(F("Back"));

  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(1418);
  tft.setTTFFont(Arial_13);
  tft.setCursor(130, 211 );
  const char backStat[] = "Text";
  tft.print(backStat);

  tft.drawFastHLine(12, 229, 220, 65535);
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(65535);
  tft.setTTFFont(Arial_13);
  tft.setCursor(18, 236 );
  tft.print(F("Garage"));

  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(63488);
  tft.setTTFFont(Arial_13);
  tft.setCursor(130, 236 );
  const char gargStat[] = "Text";
  tft.print(gargStat);

  tft.drawFastHLine(12, 254, 220, 65535);
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(65535);
  tft.setTTFFont(Arial_13);
  tft.setCursor(18, 261 );
  tft.print(F("Side"));

  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(1418);
  tft.setTTFFont(Arial_13);
  tft.setCursor(130, 261 );
  const char sideStat[] = "Text";
  tft.print(sideStat);

  tft.drawFastHLine(12, 279, 220, 65535);
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(65535);
  tft.setTTFFont(Arial_13);
  tft.setCursor(18, 286 );
  tft.print(F("Porch"));

  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(63488);
  tft.setTTFFont(Arial_13);
  tft.setCursor(130, 286 );
  const char porchStat[] = "Text";
  tft.print(porchStat);

  tft.drawFastHLine(12, 304, 220, 65535);
  tft.drawFastHLine(12, 136, 220, 65535);
  tft.drawFastVLine(12, 136, 170, 65535);
  tft.drawFastVLine(124, 136, 170, 65535);
  tft.drawFastVLine(233, 136, 170, 65535);

  // TextBox 32
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(65535);
  tft.setTTFFont(Arial_18);
  tft.setCursor(374, 165);
  static int rhmax = 0;
  tft.print(rhmax);

  // TextBox 33
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(65535);
  tft.setTTFFont(Arial_18);
  tft.setCursor(258, 225);
  static float tmin = 0.00;
  tft.print(tmin);

  // TextBox 34
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(65535);
  tft.setTTFFont(Arial_18);
  tft.setCursor(373, 225);
  static int rhmin = 0;
  tft.print(rhmin);

  // TextBox 23
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(65535);
  tft.setTTFFont(Arial_18_Bold);
  tft.setCursor(373, 262);
  tft.print(F("NOW"));

  // TextBox 24
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(65535);
  tft.setTTFFont(Arial_18_Bold);
  tft.setCursor(373, 142);
  tft.print(F("MAX"));

  // TextBox 25
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(65535);
  tft.setTTFFont(Arial_18_Bold);
  tft.setCursor(373, 202);
  tft.print(F("MIN"));

  // TextBox 26
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(65535);
  tft.setTTFFont(Arial_18_Bold);
  tft.setCursor(254, 262);
  tft.print(F("NOW"));

  // TextBox 28
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(65535);
  tft.setTTFFont(Arial_18_Bold);
  tft.setCursor(255, 142);
  tft.print(F("MAX"));

  // TextBox 31
  // you may want to specify the background color
  //   tft.setTextColor(ForeColor, BackColor);
  tft.setTextColor(65535);
  tft.setTTFFont(Arial_18_Bold);
  tft.setCursor(254, 202);
  tft.print(F("MIN"));


  tft.setTTFFont(Arial_14);
  Button2.drawButton();

}
/*
End of the auto-generated code for ILI9341_t3 screens
*/
