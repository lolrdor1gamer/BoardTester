#ifndef SignalGenerator_h
#define SignalGenerator_h

class SignalGenerator
{
private:
    /* data */
public:

    int pulseDuration = 100;



    SignalGenerator(/* args */);
    ~SignalGenerator();

    static void DigitalTestSignal(int port, bool isHigh = false);
};

#endif