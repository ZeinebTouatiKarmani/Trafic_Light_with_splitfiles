#include "led_lyskryds.h"
#include <Arduino.h>

void setup() {
    setup_pins();
}

void loop() {

    initier_lyskryds();

    setred(HIGH);    // Red ON
    delay(4000);     // Wait 5 seconds

    setyellow(HIGH); // Yellow ON (Red still ON)
    delay(2000);     // Wait 2 seconds

    setred(LOW);     // Red OFF
    setyellow(LOW);  // Yellow OFF
    setgreen(HIGH);  // Green ON
    delay(4000);     // Wait 5 seconds

    setgreen(LOW);   // Green OFF
    setyellow(HIGH); // Yellow ON
    delay(2000);     // Wait 2 seconds

    setyellow(LOW);  // Yellow OFF

}