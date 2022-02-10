void DisplayPatterns::StaticGlowBlue(CRGB leds, int num_leds) 
    for (int i = 0; i <= num_leds; i++) {
        leds[i] = CRGB(0, 0, 255);
        FastLED.show();
        delay(500);
    }
    return;
}

void DisplayPatterns::StaticGlowGreen(CRGB leds, int num_leds) 
    for (int i = 0; i <= num_leds; i++) {
        leds[i] = CRGB(0, 255, 0);
        FastLED.show();
        delay(500);
    }
    return;
}

void DisplayPatterns::StaticGlowRed(CRGB leds, int num_leds) 
    for (int i = 0; i <= num_leds; i++) {
        leds[i] = CRGB(255, 0, 0);
        FastLED.show();
        delay(500);
    }
    return;
}

void DisplayPatterns::Off() 
    FastLED.clear();    
    FastLED.show();
    return;
}
