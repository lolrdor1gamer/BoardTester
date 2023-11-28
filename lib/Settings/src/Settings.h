#ifndef settings_h
#define settings_h
#include <Arduino.h>
class Settings
{
    public:
    static const int sginalPulseDuration = 100;
    static const int signalPulseDelay = 10;

    static const uint8_t digitalInputPin = D8;
    static const uint8_t analogInputPin = A5;

    static const uint8_t digitalOutputPin = D4;
    static const uint8_t analogOutputPin = A2;
    
};

#endif