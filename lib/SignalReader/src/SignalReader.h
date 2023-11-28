#ifndef SignalReader_h
#define SignalReader_h

class SignalReader
{
private:
    /* data */
public:
    SignalReader(/* args */);
    ~SignalReader();

    static void DigitalTestSignal(int port, bool isHigh = false);
    static void AnalogTestSignal(int port, bool isHigh = false);
};

#endif