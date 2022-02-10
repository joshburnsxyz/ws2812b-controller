void DisplayPatterns::StaticGlow(CRGB leds, int num_leds) 
    for (int i = 0; i <= num_leds; i++) {
        leds[i] = CRGB(36, 190, 255); // Hard-Coded color value
        FastLED.show();
    }
}