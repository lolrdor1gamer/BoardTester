#ifndef SignalGenerator_h
#define SignalGenerator_h

class SignalGenerator
{
private:
    /* data */
public:
    SignalGenerator(/* args */);
    ~SignalGenerator();

    static void DigitalTestSignal(int port, bool isHigh = false);
};

#endif