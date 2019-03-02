#include <Adafruit_GFX.h>    // Core graphics library
#include <MCUFRIEND_kbv.h>   // Hardware-specific library
MCUFRIEND_kbv tft;

#include <Fonts/FreeSans9pt7b.h>
#include <Fonts/FreeSans12pt7b.h>
#include <Fonts/FreeSerif12pt7b.h>
#include <Fonts/FreeMonoBold24pt7b.h>

#include <FreeDefaultFonts.h>

#define BLACK   0x0000
#define RED     0xF800
#define GREEN   0x07E0
#define WHITE   0xFFFF
#define GREY    0x8410
#define BLUE    0x00FF
#define YELLOW  0xFFE0
#define MAGENTA 0xF81F
#define CYAN    0x07FF

void setup() {
    Serial.begin(9600);
    uint16_t ID = tft.readID();
    if (ID == 0xD3) ID = 0x9481;
    tft.begin(ID);
    tft.setRotation(0);
   tft.fillScreen(BLACK);
   showmsgXY(5, 50, 2, &FreeSans9pt7b, "Test");
}

void loop() {


   

}

void showmsgXY(int x, int y, int sz, const GFXfont *f, const char *msg)
{
    int16_t x1, y1;
    uint16_t wid, ht;
    tft.drawFastHLine(0, y+10, tft.width(), WHITE);
    tft.setFont(f);
    tft.setCursor(x, y);
    tft.setTextColor(BLUE);
    tft.setTextSize(sz);
    tft.print(msg);
    //delay(20);
}
