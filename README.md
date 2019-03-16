# Arduino TFT Project

#### Aim
To setup 2.8" TFT screen using Arduino

#### Boards used
1. [TFT Screen](https://www.ebay.co.uk/itm/2-4-Inch-LCD-TFT-Touch-Screen-Display-Shield-Module-for-Arduino-UNO-MEGA-2560-PI/263982083387?ssPageName=STRK%3AMEBIDX%3AIT&_trksid=p2057872.m2749.l2649)
2. [Arduino MEGA equivalent](https://www.ebay.co.uk/itm/Arduino-Mega-2560-R3-ATmega328P-16U2-MU-Compatible-Board-FREE-USB-Cable-UK/262595532334?ssPageName=STRK%3AMEBIDX%3AIT&_trksid=p2057872.m2749.l2649)

#### Libraries used
1. [Adafruit-GFX](https://github.com/adafruit/Adafruit-GFX-Library)
2. [MCUFRIEND_kbv](https://github.com/prenticedavid/MCUFRIEND_kbv)

#### Changes required
In MCUFRIEND_kbv-2.9.8/MCUFRIEND_kbv.cpp, uncomment these lines 11 and 12:

```
#define SUPPORT_8347D             //HX8347-D, HX8347-G, HX8347-I, HX8367-A +520 bytes, 0.27s
#define SUPPORT_8347A             //HX8347-A +500 bytes, 0.27s
```

If you don't make this change, the screen is constantly white as seen below.

![Before Change](https://github.com/SpiteyBill/arduino-tft-text/blob/master/Images/IMG_20190316_153046.jpg)

#### Test builds

The function that writes text on the screen is


`void showmsgXY(int x, int y, int sz, const GFXfont *f,int colour_t, const char *msg)`

It draws a horizontal line underneath the text as well.

Examples:

Set the rotation of the text (0 degrees)

`tft.setRotation(0);`

Write Yellow text, at specified position and font

`showmsgXY(5, 50, 2, &FreeMono9pt7b,YELLOW, "Test");`

![Yellow text](https://github.com/SpiteyBill/arduino-tft-text/blob/master/Images/IMG_20190316_153124.jpg)

Set rotation at 90 deg (although it says 45)

`tft.setRotation(45);`

Write Blue text, at specified position and font

`showmsgXY(5, 50, 2, &FreeMono9pt7b,BLUE, "Test");`

![Blue text](https://github.com/SpiteyBill/arduino-tft-text/blob/master/Images/IMG_20190316_153050.jpg)



