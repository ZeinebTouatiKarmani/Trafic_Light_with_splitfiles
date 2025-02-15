#ifndef led_lyskryds
#define led_lyskryds

void setup_pins();          //setup  LED pins

void initier_lyskryds();    // Initialize traffic light system (Turn off all LEDs initially)

void setred(int status);    // Control Red LED
void setyellow(int status); // Control Yellow LED
void setgreen(int status);  // Control Green LED

#endif