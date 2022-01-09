/*
  This code was automatically generated from graphic elements in a PowerPoint presentation.

  Autogenerate code written by Kris Kasprzak kris.kasprzak@yahoo.com
  Use this code without warranty
  Rev  Date         Author     Desc
  1.0  06/06/2020   Kasprzak   Initial code

  Adapted by Bodmer to use TFT_eSPI library:
  https://github.com/Bodmer/TFT_eSPI
*/

#include "font_Arial.h"
#include "font_ArialBold.h"
#include "font_ArialBoldItalic.h"
#include "font_ArialItalic.h"

// Extension library for TFT_eSPI
#include "tft_font.h"
TFT_ext Display = TFT_ext();

// Rounded rectangles will be turned into Adafruit buttons
// add code for touch screen processing

TFT_eSPI_Button Button1;

void setup() {


  Display.begin();
  delay(100);

  // use 1 or 3 for landscape mode
  // you will have to experiment as displays are different
  Display.setRotation(1);
  char label[6] = {"SETUP"};
  label[5] = 0;
  Button1.initButton(&Display, 267, 22, 94, 32, 65535, 10836, 65535, label, 2);

}

void loop() {


  // function call for Screen1
  Screen1();
  delay(5000);


  // function call for Screen2
  Screen2();
  delay(5000);

}

void Screen1() {


  Display.fillScreen(65535);

  // Rectangle 5
  Display.fillRect(41, 44, 250, 153, 63488);
  Display.fillRect(41, 44, 250, 9, 17304);
  Display.fillRect(41, 197, 250, 9, 17304);
  // Isosceles Triangle 6
  Display.fillTriangle(217, 109, 280, 109, 248, 57, 65504);
  // Oval 7
  Display.fillCircle(248, 91, 5, 0);
  // TextBox 19
  // you may want to specify the background color
  // Display.setTextColor(ForeColor, BackColor);
  Display.setTextColor(65535);
  Display.setTTFFont(Arial_16_Bold);
  Display.setCursor(70, 80);
  Display.print(F("Warning"));

  // TextBox 20
  // you may want to specify the background color
  // Display.setTextColor(ForeColor, BackColor);
  Display.setTextColor(65535);
  Display.setTTFFont(Arial_16);
  Display.setCursor(73, 126);
  Display.print(F("Restart the system."));



}

void Screen2() {


  Display.fillScreen(0);

  // TextBox 2
  Display.fillRect(0, 0, 320, 45, 14791);
  // you may want to specify the background color
  // Display.setTextColor(ForeColor, BackColor);
  Display.setTextColor(65535);
  Display.setTTFFont(Arial_14_Bold);
  Display.setCursor(7, 10);
  Display.print(F("HOME AUTOMATION"));

  // Rectangle 5
  // note displays handle rotations differently so you may have to swap fillRectHGradient for fillRectVGradient
  Display.fillRect(9, 59, 147, 172, 2145);
  // you may want to specify the background color
  // Display.setTextColor(ForeColor, BackColor);
  Display.setTextColor(65535);
  Display.setTTFFont(Arial_12_Bold);
  Display.setCursor(9, 59);
  Display.print(F("TIME"));

  // Rectangle 11
  // note displays handle rotations differently so you may have to swap fillRectHGradient for fillRectVGradient
  Display.fillRect(163, 59, 73, 173, 2145);
  // you may want to specify the background color
  // Display.setTextColor(ForeColor, BackColor);
  Display.setTextColor(65535);
  Display.setTTFFont(Arial_12_Bold);
  Display.setCursor(163, 59);
  Display.print(F("TEMP"));

  // Rectangle 12
  // note displays handle rotations differently so you may have to swap fillRectHGradient for fillRectVGradient
  Display.fillRect(241, 59, 73, 173, 2145);
  // you may want to specify the background color
  // Display.setTextColor(ForeColor, BackColor);
  Display.setTextColor(65535);
  Display.setTTFFont(Arial_12_Bold);
  Display.setCursor(241, 59);
  Display.print(F("%RH"));

  // TextBox 19
  // you may want to specify the background color
  // Display.setTextColor(ForeColor, BackColor);
  Display.setTextColor(65535);
  Display.setTTFFont(Arial_12);
  Display.setCursor(20, 76);
  Display.print(F("8:44 PM"));

  // TextBox 27
  // you may want to specify the background color
  // Display.setTextColor(ForeColor, BackColor);
  Display.setTextColor(65535);
  Display.setTTFFont(Arial_12);
  Display.setCursor(178, 119);
  Display.print(F("82.1"));

  // TextBox 29
  // you may want to specify the background color
  // Display.setTextColor(ForeColor, BackColor);
  Display.setTextColor(65535);
  Display.setTTFFont(Arial_12);
  Display.setCursor(179, 210);
  Display.print(F("80.2"));

  // TextBox 30
  // you may want to specify the background color
  // Display.setTextColor(ForeColor, BackColor);
  Display.setTextColor(65535);
  Display.setTTFFont(Arial_12);
  Display.setCursor(255, 210);
  Display.print(F("32"));

  // Table 8
  Display.drawFastHLine(8, 102, 147, 65535);
  Display.fillRect(8, 102, 75, 32, 268);
  // you may want to specify the background color
  // Display.setTextColor(ForeColor, BackColor);
  Display.setTextColor(65535);
  Display.setTTFFont(Arial_8_Bold);
  Display.setCursor(15, 112 );
  Display.print(F("Door"));

  Display.fillRect(83, 102, 72, 32, 268);
  // you may want to specify the background color
  // Display.setTextColor(ForeColor, BackColor);
  Display.setTextColor(65535);
  Display.setTTFFont(Arial_8_Bold);
  Display.setCursor(90, 112 );
  Display.print(F("Status"));

  Display.drawFastHLine(8, 134, 147, 65535);
  // you may want to specify the background color
  // Display.setTextColor(ForeColor, BackColor);
  Display.setTextColor(65535);
  Display.setTTFFont(Arial_8);
  Display.setCursor(12, 140 );
  Display.print(F("Front"));

  // you may want to specify the background color
  // Display.setTextColor(ForeColor, BackColor);
  Display.setTextColor(1418);
  Display.setTTFFont(Arial_8);
  Display.setCursor(87, 140 );
  Display.print(F("Closed"));

  Display.drawFastHLine(8, 153, 147, 65535);
  // you may want to specify the background color
  // Display.setTextColor(ForeColor, BackColor);
  Display.setTextColor(65535);
  Display.setTTFFont(Arial_8);
  Display.setCursor(12, 159 );
  Display.print(F("Back"));

  // you may want to specify the background color
  // Display.setTextColor(ForeColor, BackColor);
  Display.setTextColor(1418);
  Display.setTTFFont(Arial_8);
  Display.setCursor(87, 159 );
  Display.print(F("Closed"));

  Display.drawFastHLine(8, 172, 147, 65535);
  // you may want to specify the background color
  // Display.setTextColor(ForeColor, BackColor);
  Display.setTextColor(65535);
  Display.setTTFFont(Arial_8);
  Display.setCursor(12, 178 );
  Display.print(F("Garage"));

  // you may want to specify the background color
  // Display.setTextColor(ForeColor, BackColor);
  Display.setTextColor(63488);
  Display.setTTFFont(Arial_8);
  Display.setCursor(87, 178 );
  Display.print(F("Open"));

  Display.drawFastHLine(8, 191, 147, 65535);
  // you may want to specify the background color
  // Display.setTextColor(ForeColor, BackColor);
  Display.setTextColor(65535);
  Display.setTTFFont(Arial_8);
  Display.setCursor(12, 197 );
  Display.print(F("Side"));

  // you may want to specify the background color
  // Display.setTextColor(ForeColor, BackColor);
  Display.setTextColor(1418);
  Display.setTTFFont(Arial_8);
  Display.setCursor(87, 197 );
  Display.print(F("Closed"));

  Display.drawFastHLine(8, 210, 147, 65535);
  // you may want to specify the background color
  // Display.setTextColor(ForeColor, BackColor);
  Display.setTextColor(65535);
  Display.setTTFFont(Arial_8);
  Display.setCursor(12, 216 );
  Display.print(F("Porch"));

  // you may want to specify the background color
  // Display.setTextColor(ForeColor, BackColor);
  Display.setTextColor(63488);
  Display.setTTFFont(Arial_8);
  Display.setCursor(87, 216 );
  Display.print(F("Closed"));

  Display.drawFastHLine(8, 229, 147, 65535);
  Display.drawFastHLine(8, 102, 147, 65535);
  Display.drawFastVLine(8, 102, 128, 65535);
  Display.drawFastVLine(83, 102, 128, 65535);
  Display.drawFastVLine(155, 102, 128, 65535);

  // TextBox 32
  // you may want to specify the background color
  // Display.setTextColor(ForeColor, BackColor);
  Display.setTextColor(65535);
  Display.setTTFFont(Arial_12);
  Display.setCursor(256, 119);
  Display.print(F("55"));

  // TextBox 33
  // you may want to specify the background color
  // Display.setTextColor(ForeColor, BackColor);
  Display.setTextColor(65535);
  Display.setTTFFont(Arial_12);
  Display.setCursor(178, 165);
  Display.print(F("79.8"));

  // TextBox 34
  // you may want to specify the background color
  // Display.setTextColor(ForeColor, BackColor);
  Display.setTextColor(65535);
  Display.setTTFFont(Arial_12);
  Display.setCursor(255, 164);
  Display.print(F("51"));

  // TextBox 23
  // you may want to specify the background color
  // Display.setTextColor(ForeColor, BackColor);
  Display.setTextColor(65535);
  Display.setTTFFont(Arial_12_Bold);
  Display.setCursor(255, 193);
  Display.print(F("NOW"));

  // TextBox 24
  // you may want to specify the background color
  // Display.setTextColor(ForeColor, BackColor);
  Display.setTextColor(65535);
  Display.setTTFFont(Arial_12_Bold);
  Display.setCursor(255, 102);
  Display.print(F("MAX"));

  // TextBox 25
  // you may want to specify the background color
  // Display.setTextColor(ForeColor, BackColor);
  Display.setTextColor(65535);
  Display.setTTFFont(Arial_12_Bold);
  Display.setCursor(255, 147);
  Display.print(F("MIN"));

  // TextBox 26
  // you may want to specify the background color
  // Display.setTextColor(ForeColor, BackColor);
  Display.setTextColor(65535);
  Display.setTTFFont(Arial_12_Bold);
  Display.setCursor(176, 193);
  Display.print(F("NOW"));

  // TextBox 28
  // you may want to specify the background color
  // Display.setTextColor(ForeColor, BackColor);
  Display.setTextColor(65535);
  Display.setTTFFont(Arial_12_Bold);
  Display.setCursor(176, 102);
  Display.print(F("MAX"));

  // TextBox 31
  // you may want to specify the background color
  // Display.setTextColor(ForeColor, BackColor);
  Display.setTextColor(65535);
  Display.setTTFFont(Arial_12_Bold);
  Display.setCursor(176, 147);
  Display.print(F("MIN"));

  Button1.drawButton();
}
