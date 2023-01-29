#include <Adafruit_NeoPixel.h>

#define pin 8
#define num 12

Adafruit_NeoPixel strip=Adafruit_NeoPixel(num,pin,NEO_GRB);

uint32_t color=strip.Color(0,0,255);

void setup() {
  strip.begin();
  strip.show();
  strip.setBrightness(255);
}

void loop() {
  for(int i=0;i<num;i++) {
   strip.setPixelColor(i,color);
   strip.show();
   delay(100);
   strip.setPixelColor(i,0);
  }
}
