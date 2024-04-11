/*
  All Features
  
  Sample code for the PicUNO RP2040 that comes from the factory.

  This example shows how all special features of the PicUNO RP2040 work. These Include:
  1) Built-In LED
  2) NeoPixel (WS2812)
  3) Level Shifting

  Functionality is as follows. GPIO 2 is set HIGH and then NeoPixels function and LED blinks.
  Then, GPIO3 waits for an input and base don the input, LED Built-in either turns on or off. 
  
  An external switch must be attached to GPIO3 to 5V or 3.3V
  
  DEPECNDENCIES: This library requires the Adafruit_NeoPixel library which can be downloaded from 
  Arduino Library Manager or from: https://github.com/adafruit/Adafruit_NeoPixel

  Written by Atul Ravi, 2024 for AtrivaTECH, ESCcrasci (Units Of It's ON Group Of Companies).

  This example code is in the public domain.
  https://www.github.com/AtrivaTECH/AtrivaTECH_PicUNO
  
  Fully Open Source
  License: GNU GPL V3
*/
#include <Adafruit_NeoPixel.h> //Library for Neopixel
#include <AtrivaTECH_PicUNO.h> //Library for PicUNO Board functions

#define PIN        17	//Setting NeoPixel Pin as 17
#define NUMPIXELS 1 	//Setting that only 1 NeoPixel is available
#define sw 3 			//Setting input switch is at GPIO 3.

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800); //Creating pixels object which contains details of NeoPixel as defined. These are later used internally in the library for specific operations.
#define DELAYVAL 500.

picuno myPicuno; //creating myPicuno object. This is later referenced below for specific operations. 

int buttonState = 0;  //Setting input button state as 0

void setup() {
  myPicuno.setit();  //Setting Level Shifted Pins as OUTPUTS. This will be over-written if you seperately initialise pinMode (2-5,INPUT/OUPTUT); As of now, they are set as outputs. 
  myPicuno.lvlpins(); //GPIOs 2-5 are pulled low. (To 0 volts)
  
  pinMode(2,OUTPUT); 	//Setting GPIO 2 as an output
  pinMode(3,INPUT);		//Setting GPIO 3 as an INPUT
  pinMode(LED_BUILTIN,OUTPUT); //Setting Built-In LED as an output
  
  pixels.begin();  	//starting neopixels
  pixels.clear(); 	//If neopixel is already on because of previous code, it is turned off.
  
  digitalWrite(2,HIGH); //Code for demonstrating level shifting by toggling it on and off for a second to see if 5V output persists with external power. 
  delay(1000);
  digitalWrite(2,LOW);
  delay(1000);
  
  pixels.begin(); //once again neopixel is started.
  
  //Code for creating random numbers from 0-255 so that a varied colour range of the WS2812 can be observed:
  for(int i=0; i<NUMPIXELS; i++) {     //Creating a for loop that increases value of i till the number of neopixels specified
    for (int j=0; j<=255; j++){  	  //for loop for increasing value from 0 to 255 linearly for red
      int num = rand() % 256; 		 //random number generator for green 
      int num2 = rand() % 256;		// random number generation for blue
      pixels.setPixelColor(i, pixels.Color(j, num, num2)); //finally while red intensity and colour varies linearly from 0-255, other colours are random hence giving different outputs each time.Then this is set as output to the neopixel
      pixels.show();
      delay(100);
      } 
    delay(DELAYVAL); 
     }
pixels.clear(); 

//Code for toggling built-in LED on and off once in a span of 1 second to demonstrate its working.
digitalWrite(LED_BUILTIN, HIGH);   
delay(1000);                       
digitalWrite(LED_BUILTIN, LOW);   
delay(1000);      
}

// the loop function runs over and over again forever
void loop() {
     buttonState = digitalRead(sw);      //Getting input from GPIO3 and storing it in a variable.        
       if (buttonState == LOW) {  		//if GPIO3 is held LOW to 5V/3.3V we switch LED_BUILTIN ON. Else it stays OFF. 
    digitalWrite(LED_BUILTIN, HIGH);
  } else {
    digitalWrite(LED_BUILTIN, LOW);
  }
}