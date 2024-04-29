#include "ErrorState.h"
#include <Arduino.h>

void ErrorState::enter(const char* message){
    Serial.println(message);
}