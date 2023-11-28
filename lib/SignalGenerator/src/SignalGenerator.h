#ifndef SignalGenerator_h
#define SignalGenerator_h
#include "Settings.h"
class SignalGenerator
{
private:
    static void DigitalSignalWriter();
    static void DigitalShiftWriter();
    static void AnalogShiftWriter();
    static void AnalogStandartWriter();

    /* \fn Mapping
    *   \brief Function for tracing signal to sensor pin, that needed
    *
    * @param sensor set needed sensor
    * @param isHigh determine is it high voltage signal or low
    * @param isDig is the signal digital or analog
    */ 
    static void MapSignal(Sensor sensor, bool isHigh = false, bool isDig = true);
    /* \fn DigitalMux
    *   \brief Function for setting up output mux
    *
    * @param first msb of mux
    * @param second lsb of mux
    */ 
    static void DigitalMux(bool first, bool second);
public:
    /* \fn DigitalTest
    *   \brief Run the test of digital signals
    *
    * @param sensor set needed sensor
    * @param isHigh determine is it high voltage signal or low
    */ 
    static void DigitalTest(Sensor sensor, bool isHigh);
        /* \fn DigitalTest
    *   \brief Run the test of analog signals
    *
    * @param sensor set needed sensor
    * @param isHigh determine is it high voltage signal or low
    */ 
    static void AnalogTest(Sensor sensor, bool isHigh);


};



#endif