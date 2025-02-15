#include "led_lyskryds.h"
#include <Arduino.h>

void setup() {
    pinMode(13, OUTPUT);
    pinMode(14, OUTPUT);
    pinMode(15, OUTPUT);
}

void loop() {

RED_led_on();

RED_YELLOW_led_on();

GREEN_led_on();

YELLOW_led_on();

}