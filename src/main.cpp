#include <FastLED.h>

#define LED_PIN     7
#define NUM_LEDS    20
#define DISP_MODE   0

CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);  
}

void loop() {
    switch(DISP_MODE) {
        case 0:
            // Static Glow
            break;
        case 1:
            // Demo 1
            break;
        case 2:
            // Demo 2
            break;
        case 3:
            // Off
            break;
    }
}