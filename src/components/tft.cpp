#include "components/tft.h"
#include <Adafruit_GFX.h>
#include <Adafruit_ILI9341.h>
#include <LittleFS.h>
#include "log.h"
#include "Bitmap.h"
#include <tuple>

#define D_CS 15
#define D_DC 2
#define D_MOSI 13
#define D_CLK 14
#define D_RST 16
#define D_MISO 12
// Adafruit_ILI9341(int8_t _CS, int8_t _DC, int8_t _MOSI, int8_t _SCLK,
//                    int8_t _RST = -1, int8_t _MISO = -1);

static Adafruit_ILI9341 tft(D_CS, D_DC, D_RST); //though there is a bigger constructor, this one seems to build faster SPI bit transfer


void draw_unexpected(float a){
    int radius = 80;
    size_t index = 0;
    uint16 colors[] ={
    ILI9341_BLUE,
    ILI9341_RED,
    ILI9341_PURPLE,
    ILI9341_PINK,
    ILI9341_ORANGE,
    ILI9341_GREEN
  };
   for(; radius > 2; radius = radius / a  + sqrt(radius)){
    tft.fillCircle(tft.width() / 2, tft.height() - 80, radius, colors[index++ % 5]);
  }
   
}

void tft_begin(){   
  
  tft.begin();
  tft.setRotation(2);
  tft.fillScreen(ILI9341_BLACK);
  
  tft.setTextSize(2);
  tft.setTextColor(ILI9341_GREEN);
  tft.setCursor(0, 10);
  tft.println("Hello this is Mark's Project");
  draw_unexpected(2);
  
}


void tft_run(){
 
}