#include <FastLED.h>

class DisplayPatterns
{
    public:
        void StaticGlowBlue(CRGB leds, int num_leds);
        void StaticGlowGreen(CRGB leds, int num_leds);
        void StaticGlowRed(CRGB leds, int num_leds);
        void Off(CRGB leds, int num_leds);
}