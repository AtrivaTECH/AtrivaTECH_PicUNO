/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos and Clones like the PicUNO have an on-board LED you can control. This is specific
  to the PicUNO and uses the On Board LED attached to GPIO 14. The imported board library
  overwrites the built-in constant specifically for the PicUNO
  model, check the Technical Specs of your PicUNO at:
  https://www.atrivatech.com/picuno

  Created 8 April 2024
  by Atul Ravi
 

  This example code is in the public domain.

  https://www.github.com/AtrivaTECH/AtrivaTECH_PicUNO
*/

#include <AtrivaTECH_PicUNO.h>
// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);  // initialize digital pin LED_BUILTIN as an output.
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}