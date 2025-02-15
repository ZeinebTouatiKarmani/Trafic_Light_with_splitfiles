#include <Arduino.h>
#include "led_lyskryds.h"

byte  RED_LED =13 ;    // Pin for RED LED
byte  YELLOW_LED =14 ;  // Pin for YELLOW LED
byte  GREEN_LED =15 ;   // Pin for GREEN LED

void setup_pins(){
  pinMode(RED_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
}

void initier_lyskryds() {
    
    setred(LOW);
    setyellow(LOW);
    setgreen(LOW);
}

void setred(int status) {
    digitalWrite(RED_LED, status);
}

void setyellow(int status) {
    digitalWrite(14, status);
}

void setgreen(int status) {
    digitalWrite(15, status);
}