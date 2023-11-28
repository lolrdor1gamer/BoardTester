#include "SignalReader.h"
#include "Settings.h" // Assuming Settings is in the same directory
#include "SignalGenerator.h"
#include <iostream>

SignalReader::SignalReader(/* args */)
{
}

SignalReader::~SignalReader()
{
}

void SignalReader::DigitalTestSignal(int port, bool isHigh)
{

    // Simulating the reading of a digital signal
    int digitalInputState = digitalRead(Settings::digitalInputPin);

    if (digitalInputState == HIGH)
    {
        Serial.println("Reading HIGH signal on port " << port << " with pulse duration: " << Settings::signalPulseDuration << "ms");
        Serial.print("Pulse Duration: ");
        Serial.println(Settings::signalPulseDuration);
        Serial.print("Pulse Delay: ");
        Serial.println(Settings::signalPulseDelay);
    }
    else
    {
        Serial.println("Reading LOW signal on port " << port << " with pulse duration: " << Settings::signalPulseDuration << "ms");
        Serial.print("Pulse Duration: ");
        Serial.println(Settings::signalPulseDuration);
        Serial.print("Pulse Delay: ");
        Serial.println(Settings::signalPulseDelay);
        Serial.print(digitalInputState)
    }
}

void SignalReader::AnalogTestSignal(int port, bool isHigh)
{
    // Simulating the reading of an analog signal
    int analogInputValue = analogRead(Settings::analogInputPin);

    Serial.print("Reading analog signal on port " << port <<);
    Serial.print(analogInputValue);
}
