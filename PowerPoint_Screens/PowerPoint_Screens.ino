/*
This code was automatically generated from graphic elements in a PowerPoint presentation
Generated: 17 January 2022 21:37:51
  Version: 1.0.4
Original autogenerate code written by Kris Kasprzak kris.kasprzak@yahoo.com
Use this code without warranty

Rev    Date         Author     Desc
1.0    06/06/2020   Kasprzak   Initial code
1.1    01/08/2022   Frank B    Improvements and TFT_eSPI_ext library
1.0.x  08/01/2022   Bodmer     Debugged and extended functionality

Requires library TFT_eSPI (can load via Arduino IDE library manager):
    https://github.com/Bodmer/TFT_eSPI
and Frank's font extension library:
    https://github.com/FrankBoesing/TFT_eSPI_ext
additional font files are available here:
    https://github.com/FrankBoesing/fonts/tree/main/ofl
*/

// You will need to include the appropriate .h files for the fonts
// This example uses the standard fonts that comes with TFT_eSPI_ext.

#include <font_Arial.h>
#include <font_ArialBold.h>
#include <font_ArialItalic.h>
#include <font_ArialBoldItalic.h>

#include <SPI.h>
#include <TFT_eSPI_ext.h>
TFT_eSPI_ext tft = TFT_eSPI_ext();

// Rounded rectangles will be turned into Adafruit buttons
// add code for touch screen processing

TFT_eSPI_Button Button1;
char buttonLabel1[] = "Setup";


void setup(){

  tft.begin();

  // use 1 or 3 for landscape mode
  // you will have to experiment as displays are different
  tft.setRotation(3);

  Button1.initButton(&tft,272, 22, 63, 32, 0xFFFF, 0x2A54, 0xFFFF, buttonLabel1, 2);

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


  // function call for Screen5
  Screen5();
  delay(5000);


  // function call for Screen6
  Screen6();
  delay(5000);


  // function call for Screen7
  Screen7();
  delay(5000);

}

void Screen1(){


  tft.fillScreen(0xFFFF);

  // Right Triangle 4
  tft.fillTriangle(114, 54, 267, 135, 114, 135, 0x4398);
  // Right Triangle 8
  tft.fillTriangle(74, 192, 267, 135, 74, 135, 0x4398);
  // Right Triangle 9
  tft.fillTriangle(114, 54, 114, 135, 74, 135, 0x4398);
  // Right Triangle 10
  tft.fillTriangle(48, 192, 74, 135, 48, 135, 0xFFFF);


}

void Screen2(){


  tft.fillScreen(0xFFFF);

  // Isosceles Triangle 1
  tft.fillTriangle(15, 222, 146, 222, 80, 32, 0x4398);
  tft.drawTriangle(15, 222, 146, 222, 80, 32, 0x2A91);
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_20);
  tft.setCursor(63, 148);
  tft.print(F("TEST"));

  // Isosceles Triangle 2
  tft.fillTriangle(132, 127, 214, 127, 173, 231, 0xF800);
  // Right Triangle 3
  tft.fillTriangle(254, 16, 298, 60, 254, 60, 0xF800);
  tft.drawTriangle(254, 16, 298, 60, 254, 60, 0x2A91);
  // Right Triangle 4
  tft.fillTriangle(254, 110, 298, 66, 254, 66, 0x07E0);
  tft.drawTriangle(254, 110, 298, 66, 254, 66, 0x2A91);
  // Right Triangle 5
  tft.fillTriangle(248, 16, 248, 60, 204, 60, 0xFE00);
  tft.drawTriangle(248, 16, 248, 60, 204, 60, 0x2A91);
  // Right Triangle 6
  tft.fillTriangle(248, 110, 248, 66, 204, 66, 0x001F);
  tft.drawTriangle(248, 110, 248, 66, 204, 66, 0x2A91);


}

void Screen3(){


  tft.fillScreen(0xFFFF);

  // Rectangle 5
  tft.fillRectVGradient(0, 0, 320, 123, 0xF800, 0xFFE0);
  // TextBox 1
  tft.fillRect(42, 41, 230, 51, 0xFE00);
  tft.setTextColor(0x0000);
  tft.setTTFFont(Arial_24);
  tft.setCursor(71, 53);
  tft.print(F("Hello World"));



}

void Screen4(){


  tft.fillScreen(0xFFFF);

  // TextBox 2
  tft.fillRect(0, 0, 320, 46, 0x39C7);
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_20_Bold);
  tft.setCursor(6, 13);
  tft.print(F("HOME AUTOMATION"));

  // Rectangle 5
  tft.fillRectHGradient(9, 59, 148, 172, 0x0861, 0x4A69);
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_18_Bold);
  tft.setCursor(9, 65);
  tft.print(F("TIME"));

  // Rectangle 11
  tft.fillRectHGradient(163, 59, 74, 174, 0x0861, 0x4A69);
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_18_Bold);
  tft.setCursor(163, 65);
  tft.print(F("TEMP"));

  // Rectangle 12
  tft.fillRectHGradient(240, 59, 74, 174, 0x0861, 0x4A69);
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_18_Bold);
  tft.setCursor(240, 65);
  tft.print(F("%RH"));

  // TextBox 19
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_18);
  tft.setCursor(12, 82);
  const char timeNow[] = "Text";
  tft.print(timeNow);

  // TextBox 27
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_18);
  tft.setCursor(169, 125);
  static float tmax = 0.00;
  tft.print(tmax);

  // TextBox 29
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_18);
  tft.setCursor(170, 216);
  static float tnow = 0.00;
  tft.print(tnow);

  // TextBox 30
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_18);
  tft.setCursor(246, 216);
  static int rhnow = 0;
  tft.print(rhnow);

  // Table 8
  tft.drawFastHLine(8, 102, 148, 0xFFFF);
  tft.fillRect(8, 102, 74, 32, 0x010C);
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_10_Bold);
  tft.setCursor(15, 111 );
  tft.print(F("Door"));

  tft.fillRect(82, 102, 72, 32, 0x010C);
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_10_Bold);
  tft.setCursor(89, 111 );
  tft.print(F("Status"));

  tft.drawFastHLine(8, 134, 148, 0xFFFF);
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_10);
  tft.setCursor(12, 140 );
  tft.print(F("Front"));

  tft.setTextColor(0xF800);
  tft.setTTFFont(Arial_10);
  tft.setCursor(86, 140 );
  const char frontStat[] = "Text";
  tft.print(frontStat);

  tft.drawFastHLine(8, 166, 148, 0xFFFF);
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_10);
  tft.setCursor(12, 172 );
  tft.print(F("Back"));

  tft.setTextColor(0x058A);
  tft.setTTFFont(Arial_10);
  tft.setCursor(86, 172 );
  const char backStat[] = "Text";
  tft.print(backStat);

  tft.drawFastHLine(8, 199, 148, 0xFFFF);
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_10);
  tft.setCursor(12, 205 );
  tft.print(F("Garage"));

  tft.setTextColor(0xF800);
  tft.setTTFFont(Arial_10);
  tft.setCursor(86, 205 );
  const char gargStat[] = "Text";
  tft.print(gargStat);

  tft.drawFastHLine(8, 231, 148, 0xFFFF);
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_10);
  tft.setCursor(12, 237 );
  tft.print(F("Side"));

  tft.setTextColor(0x058A);
  tft.setTTFFont(Arial_10);
  tft.setCursor(86, 237 );
  const char sideStat[] = "Text";
  tft.print(sideStat);

  tft.drawFastHLine(8, 263, 148, 0xFFFF);
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_10);
  tft.setCursor(12, 269 );
  tft.print(F("Porch"));

  tft.setTextColor(0xF800);
  tft.setTTFFont(Arial_10);
  tft.setCursor(86, 269 );
  const char porchStat[] = "Text";
  tft.print(porchStat);

  tft.drawFastHLine(8, 296, 148, 0xFFFF);
  tft.drawFastHLine(8, 102, 148, 0xFFFF);
  tft.drawFastVLine(8, 102, 197, 0xFFFF);
  tft.drawFastVLine(82, 102, 197, 0xFFFF);
  tft.drawFastVLine(154, 102, 197, 0xFFFF);

  // TextBox 32
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_18);
  tft.setCursor(247, 125);
  static int rhmax = 0;
  tft.print(rhmax);

  // TextBox 33
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_18);
  tft.setCursor(170, 170);
  static float tmin = 0.00;
  tft.print(tmin);

  // TextBox 34
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_18);
  tft.setCursor(246, 170);
  static int rhmin = 0;
  tft.print(rhmin);

  // TextBox 23
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_18_Bold);
  tft.setCursor(246, 198);
  tft.print(F("NOW"));

  // TextBox 24
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_18_Bold);
  tft.setCursor(247, 108);
  tft.print(F("MAX"));

  // TextBox 25
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_18_Bold);
  tft.setCursor(246, 153);
  tft.print(F("MIN"));

  // TextBox 26
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_18_Bold);
  tft.setCursor(167, 198);
  tft.print(F("NOW"));

  // TextBox 28
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_18_Bold);
  tft.setCursor(168, 108);
  tft.print(F("MAX"));

  // TextBox 31
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_18_Bold);
  tft.setCursor(167, 153);
  tft.print(F("MIN"));


  tft.setTTFFont(Arial_20);
  Button1.drawButton();

}

void Screen5(){


  tft.fillScreen(0xFFFF);

  // Rectangle 2
  tft.drawRect(41, 30, 29, 11, 0x07E0);
  // TextBox 3
  tft.setTextColor(0x0000);
  tft.setTTFFont(Arial_8);
  tft.setCursor(45, 35);
  tft.print(F("Arial 8pt"));

  // TextBox 4
  tft.setTextColor(0x0000);
  tft.setTTFFont(Arial_10);
  tft.setCursor(45, 46);
  tft.print(F("Arial 10pt"));

  // TextBox 5
  tft.setTextColor(0x0000);
  tft.setTTFFont(Arial_12);
  tft.setCursor(45, 61);
  tft.print(F("Arial 12pt"));

  // TextBox 6
  tft.setTextColor(0x0000);
  tft.setTTFFont(Arial_14);
  tft.setCursor(45, 79);
  tft.print(F("Arial 14pt"));

  // TextBox 7
  tft.setTextColor(0x0000);
  tft.setTTFFont(Arial_18);
  tft.setCursor(45, 99);
  tft.print(F("Arial 18pt"));

  // TextBox 8
  tft.setTextColor(0x0000);
  tft.setTTFFont(Arial_24);
  tft.setCursor(70, 124);
  tft.print(F("Arial 24pt"));

  // TextBox 9
  tft.setTextColor(0x0000);
  tft.setTTFFont(Arial_32);
  tft.setCursor(91, 157);
  tft.print(F("Arial 32pt"));

  // Rectangle 10
  tft.drawRect(41, 43, 41, 11, 0x07E0);
  // Rectangle 11
  tft.drawRect(41, 57, 49, 14, 0x07E0);
  // Rectangle 12
  tft.drawRect(41, 74, 58, 17, 0x07E0);
  // Rectangle 13
  tft.drawRect(41, 95, 73, 21, 0x07E0);
  // Rectangle 14
  tft.drawRect(42, 120, 95, 24, 0x07E0);
  // Rectangle 15
  tft.drawRect(41, 151, 127, 34, 0x07E0);


}

void Screen6(){


  tft.fillScreen(0xFFFF);

  // Table 1
  tft.drawFastHLine(36, 56, 231, 0x0000);
  tft.fillRect(36, 56, 74, 55, 0xEBE6);
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_9_Bold);
  tft.setCursor(47, 66 );
  tft.print(F("  integer"));

  tft.fillRect(110, 56, 78, 55, 0xEBE6);
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_9_Bold);
  tft.setCursor(121, 66 );
  tft.print(F("    float"));

  tft.fillRect(188, 56, 79, 55, 0xEBE6);
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_9_Bold);
  tft.setCursor(199, 66 );
  tft.print(F("     char"));

  tft.drawFastHLine(36, 111, 231, 0x0000);
  tft.fillRect(36, 111, 74, 41, 0xFF7D);
  tft.setTextColor(0x0000);
  tft.setTTFFont(Arial_9);
  tft.setCursor(47, 121 );
  static int tab11 = 0;
  tft.print(tab11);

  tft.fillRect(110, 111, 78, 41, 0xFF7D);
  tft.setTextColor(0x0000);
  tft.setTTFFont(Arial_9);
  tft.setCursor(121, 121 );
  static float tab21 = 0.00;
  tft.print(tab21);

  tft.fillRect(188, 111, 79, 41, 0xFF7D);
  tft.setTextColor(0x0000);
  tft.setTTFFont(Arial_9);
  tft.setCursor(199, 121 );
  const char tab31[] = "Text";
  tft.print(tab31);

  tft.drawFastHLine(36, 152, 231, 0x0000);
  tft.fillRect(36, 152, 74, 41, 0xFFFF);
  tft.setTextColor(0x0000);
  tft.setTTFFont(Arial_9);
  tft.setCursor(47, 162 );
  static int tab12 = 0;
  tft.print(tab12);

  tft.fillRect(110, 152, 78, 41, 0xFFFF);
  tft.setTextColor(0x0000);
  tft.setTTFFont(Arial_9);
  tft.setCursor(121, 162 );
  static float tab22 = 0.00;
  tft.print(tab22);

  tft.fillRect(188, 152, 79, 41, 0xFFFF);
  tft.setTextColor(0x0000);
  tft.setTTFFont(Arial_9);
  tft.setCursor(199, 162 );
  const char tab32[] = "Text";
  tft.print(tab32);

  tft.drawFastHLine(36, 193, 231, 0x0000);
  tft.fillRect(36, 193, 74, 41, 0xFF7D);
  tft.setTextColor(0x0000);
  tft.setTTFFont(Arial_9);
  tft.setCursor(47, 203 );
  static int tab13 = 0;
  tft.print(tab13);

  tft.fillRect(110, 193, 78, 41, 0xFF7D);
  tft.setTextColor(0x0000);
  tft.setTTFFont(Arial_9);
  tft.setCursor(121, 203 );
  static float tab23 = 0.00;
  tft.print(tab23);

  tft.fillRect(188, 193, 79, 41, 0xFF7D);
  tft.setTextColor(0x0000);
  tft.setTTFFont(Arial_9);
  tft.setCursor(199, 203 );
  const char tab33[] = "Text";
  tft.print(tab33);

  tft.drawFastHLine(36, 234, 231, 0x0000);
  tft.drawFastHLine(36, 56, 231, 0x0000);
  tft.drawFastVLine(36, 56, 178, 0x0000);
  tft.drawFastVLine(110, 56, 178, 0x0000);
  tft.drawFastVLine(188, 56, 178, 0x0000);
  tft.drawFastVLine(267, 56, 178, 0x0000);

  // TextBox 2
  tft.setTextColor(0x0000);
  tft.setTTFFont(Arial_20);
  tft.setCursor(38, 36);
  tft.print(F("Tables can contain variables"));

  tft.drawLine(0, 239, 161, 0, 0x4398);
  tft.drawLine(161, 0, 319, 239, 0x4398);
  tft.drawLine(319, 240, 0, 120, 0x4398);
  tft.drawLine(0, 120, 319, 0, 0x4398);
  tft.drawLine(0, 0, 157, 239, 0x4398);
  tft.drawLine(157, 239, 319, 0, 0x4398);
  tft.drawLine(0, 0, 319, 120, 0x4398);
  tft.drawLine(319, 120, 0, 240, 0x4398);


}

void Screen7(){


  tft.fillScreen(0xFFFF);

  // Rectangle 1
  tft.fillRect(0, 79, 320, 83, 0x0000);
  tft.fillRect(8, 87, 304, 67, 0xF800);
  // Rectangle 2
  tft.fillRect(136, 0, 34, 240, 0x2A91);
  tft.fillRect(144, 8, 18, 224, 0x07E0);


}
/*
End of the auto-generated code for ILI9341_t3 screens
*/
