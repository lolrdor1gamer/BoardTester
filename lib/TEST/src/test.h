#ifndef test_h
#define test_h

class test
{
private:
    /* data */
public:
    test(/* args */);
    ~test();

    static void DigitalTestSignal(int port, bool isHigh = false);
};

#endif