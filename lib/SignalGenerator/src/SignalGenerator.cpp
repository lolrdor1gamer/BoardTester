#include "SignalGenerator.h"

#pragma region DigitalWrite
void SignalGenerator::DigitalTest(Sensor sensor, bool isHigh)
{
    MapSignal(sensor, isHigh, true);
    DigitalSignalWriter();
    MapSignal(sensor, isHigh, false);
    DigitalShiftWriter();
}

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

void SignalGenerator::DigitalShiftWriter()
{
    for(int i = 0; i<Settings::signalPulseProbes; i++)
    {
        analogWrite(Settings::analogOutputPin, 1023);
        delay(Settings::sginalPulseDuration);
        digitalWrite(Settings::digitalOutputPin, Settings::signalShift);
        delay(Settings::signalPulseDelay);
    }
}
#pragma endregion

#pragma region AnalogWrite

void SignalGenerator::AnalogTest(Sensor sensor, bool isHigh)
{
    MapSignal(sensor, isHigh, false);
    AnalogStandartWriter();
    MapSignal(sensor, isHigh, false);
    AnalogShiftWriter();
}

void SignalGenerator::AnalogStandartWriter()
{
    for(int i = 0; i < Settings::signalPulseProbes; i++)
    {
        auto val = 1023.0*(sin(i)+1)/2.0;

        analogWrite(Settings::analogOutputPin, val);

        delay(Settings::signalPulseDelay+Settings::sginalPulseDuration);
    }
}

void SignalGenerator::AnalogShiftWriter()
{
    for(int i = 0; i < Settings::signalPulseProbes; i++)
    {
        auto val = (1023-Settings::signalShift)*sin(i) + Settings::signalShift;
        
        analogWrite(Settings::analogOutputPin, val);

        delay(Settings::signalPulseDelay+Settings::sginalPulseDuration);
    }
}


#pragma endregion

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

void SignalGenerator::DigitalMux(bool first, bool second)
{
    digitalWrite(Settings::ouputMux1, first);
    digitalWrite(Settings::ouputMux2, second);
}


