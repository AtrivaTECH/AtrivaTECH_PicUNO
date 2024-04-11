/*
  Fade

  This example shows how to fade the Built-In LED using the analogWrite()
  function.

  The analogWrite() function uses PWM, so if you want to change the pin you're
  using, be sure to use another PWM capable pin. On the PicUNO, all pins are PWM compatible.
  Feel free to use any pin of choice. Even the Level Shifted Pins.
  
  Modified to work with PicUNO RP2040 by
  Atul Ravi, 2024

  This example code is in the public domain.

  https://www.github.com/AtrivaTECH/AtrivaTECH_PicUNO
*/

#include <AtrivaTECH_PicUNO.h>
int brightness = 0;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by

// the setup routine runs once when you press reset:
void setup() {
  // declare LED_BUILTIN to be an output:
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // set the brightness of Built-In LED:
  analogWrite(LED_BUILTIN, brightness);

  // change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade:
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  // wait for 30 milliseconds to see the dimming effect
  delay(30);
}