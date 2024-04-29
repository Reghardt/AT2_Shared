#include <SoftwareSerial.h>


#define RX_PIN 13
#define TX_PIN 12


class Link
{
private:
    /* data */
    SoftwareSerial* ss;
public:
    Link(/* args */);
    ~Link();

    void master();
    void slave();
};


