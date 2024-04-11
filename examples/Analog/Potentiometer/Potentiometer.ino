/*
  Analog Input

  Demonstrates analog input by reading an analog sensor on analog pin 0 and
  turning on and off a light emitting diode(LED) connected to GPIO 14.
  The amount of time the LED will be on and off depends on the value obtained
  by analogRead().

  The circuit:
  - potentiometer
    center pin of the potentiometer to the GPIO 29
    one side pin (either one) to ground
    the other side pin to +5V
  - LED
    We use the Built-In LED at GPIO 14 for the output. 

  created by David Cuartielles
  modified 30 Aug 2011
  By Tom Igoe
  modified to work with PicUNO 11 April 2024
  By Atul Ravi

  This example code is in the public domain.

  https://www.github.com/AtrivaTECH/AtrivaTECH_PicUNO
*/
#include <AtrivaTECH_PicUNO.h>
int sensorPin = 29;    // select the adc input pin for the potentiometer    
int sensorValue = 0;  // variable to store the value coming from the sensor

picuno myPicuno;

void setup() {
  myPicuno.setit();
  myPicuno.lvlpins();
  // declare the ledPin as an OUTPUT:
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(29,INPUT);
  Serial.begin(9600);
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin); 
  int brightness = sensorValue / 4;
  Serial.println(brightness);
  analogWrite(LED_BUILTIN, brightness);
}