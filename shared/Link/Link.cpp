#include "Link.h"

Link::Link(/* args */)
{
    this->ss = new SoftwareSerial(RX_PIN, TX_PIN);
    pinMode(RX_PIN, INPUT);
    pinMode(TX_PIN, OUTPUT);
    this->ss->begin(9600);
}

Link::~Link()
{
    ss->end();
    delete ss;
}

void Link::master()
{
    if (ss->available() > 0) {
        Serial.println((char)ss->read());
    }
}

void Link::slave()
{
    this->ss->print("Hello from sensor");
}