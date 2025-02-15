#include <Arduino.h>
#include "led_lyskryds.h"

void RED_led_on(){
  // Step 1: Red Light ON (Stop)
    digitalWrite(13, HIGH);
    digitalWrite(14, LOW);
    digitalWrite(15, LOW);
    delay(5000); // 5 seconds
}

void RED_YELLOW_led_on(){
  // Step 2: Red + Yellow Light ON (Get Ready)
    digitalWrite(14, HIGH);
    delay(2000); // 2 seconds
}

void GREEN_led_on(){
  // Step 3: Green Light ON (Go)
    digitalWrite(13, LOW);
    digitalWrite(14, LOW);
    digitalWrite(15, HIGH);
    delay(5000); // 5 seconds
}

void YELLOW_led_on(){
  // Step 4: Yellow Light ON (Slow Down)
    digitalWrite(15, LOW);
    digitalWrite(14, HIGH);
    delay(2000); // 2 seconds
}
