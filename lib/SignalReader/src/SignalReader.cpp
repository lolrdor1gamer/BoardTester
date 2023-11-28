#include"SignalReader.h"
#include <Settings.h>
#include <SignalGenerator.h>
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

    if (digitalInputState == HIGH) {
        std::cout << "Reading HIGH signal on port " << port << " with pulse duration: " << Settings::sginalPulseDuration << "ms" << std::endl;
    } else {
        std::cout << "Reading LOW signal on port " << port << " with pulse duration: " << Settings::sginalPulseDuration << "ms" << std::endl;
    }

    // Call the static method from SignalGenerator
    SignalGenerator::DigitalTestSignal(port, isHigh);
}

void SignalReader::DigitalTestSignal(int port, bool isHigh)
{
    // Simulating the reading of an analog signal
    int analogInputValue = analogRead(Settings::analogInputPin);

    std::cout << "Reading analog signal on port " << port << ": " << analogInputValue << std::endl;

    // Call the static method from SignalGenerator
    SignalGenerator::DigitalTestSignal(port, isHigh);
}