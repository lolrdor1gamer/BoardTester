#ifndef settings_h
#define settings_h
#include <Arduino.h>
class Settings
{
    public:
    static const int signalPulseDuration = 100;
    static const int signalPulseDelay = 10;
    static const int signalPulseProbes = 100;
    static const int signalShift = 512;

    static const uint8_t digitalInputPin = D11;
    static const uint8_t analogInputPin = A5;

    static const uint8_t digitalOutputPin = D10;
    static const uint8_t analogOutputPin = A2;


    static const uint8_t ouputSignalLevel = D12;
    static const uint8_t ouputSignalType = D8;

    static const uint8_t ouputMux1 = D7;
    static const uint8_t ouputMux2 = D6;
    
};

enum Sensor
{
    one = 0b0,
    two = 0b00000001,
    three = 0b00000010,
    four = 0b00000011
};

#endif