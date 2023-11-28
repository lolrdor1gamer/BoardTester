#include "SignalGenerator.h"


void SignalGenerator::DigitalSignalWriter()
{
    int counter = 0;

    for(int i = 0; i<Settings::signalPulseProbes; i++)
    {
        counter += Settings::sginalPulseDuration;

        digitalWrite(Settings::digitalOutputPin, HIGH);
        delay(counter);
        digitalWrite(Settings::digitalOutputPin, LOW);
        delay(Settings::signalPulseDelay);
    }

}

void SignalGenerator::MapSignal(Sensor sensor, bool isHigh = false, bool isDig = true)
{
    digitalWrite(Settings::ouputSignalLevel, isHigh);
    digitalWrite(Settings::ouputSignalType, isDig);

    switch(sensor)
    {
        case Sensor::one:
        DigitalMux(false, false);
        break;
        case Sensor::two:
        DigitalMux(false, true);
        break;
        case Sensor::three:
        DigitalMux(true, false);
        break;
        case Sensor::four:
        DigitalMux(true, true);
        break;
    }
}

void SignalGenerator::AnalogShiftWriter(int shift)
{
    for(int i = 0; i < 1024-shift; i++)
    {

    }
}

void SignalGenerator::DigitalMux(bool first, bool second)
{
    digitalWrite(Settings::ouputMux1, first);
    digitalWrite(Settings::ouputMux2, second);
}
void SignalGenerator::DigitalTest(Sensor sensor, bool isHigh, bool isDig)
{
    MapSignal(sensor, isHigh, isDig);
    DigitalSignalWriter();
}