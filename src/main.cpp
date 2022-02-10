#include <FastLED.h>
#include <DisplayPatterns.h>

#define LED_PIN     7
#define BTN_PIN     4
#define NUM_LEDS    20

// LED Interface
CRGB leds[NUM_LEDS];

// Default button state
int btnState = 0;

// Default mode
int dispMode = 0;

void setup() {
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
  pinMode(BTN_PIN, INPUT);
}

void loop() {
    // read button state
    if (btnState == HIGH) {
        dispMode = dispMode + 1;
        if (dispMode > 3) {
            dispMode = 0;
        }
    }
    switch(dispMode) {
        case 0:
            // Blue
            DisplayPatterns::StaticGlowBlue(leds, NUM_LEDS);
            break;
        case 1:
            // Green
            DisplayPatterns::StaticGlowGreen(leds, NUM_LEDS);
            break;
        case 2:
            // Red
            DisplayPatterns::StaticGlowRed(leds, NUM_LEDS);
            break;
        case 3:
            // Off
            DisplayPatterns::Off();
            break;
    }
}