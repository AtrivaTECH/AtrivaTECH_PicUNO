//Code for sending data via UART to another development board
#include <SoftwareSerial.h>
char Mymessage[11] = "DATA RECV"; //String data
int x = 0; 
SoftwareSerial mySerial (0, 1);
  void setup() {
    mySerial.begin(9600);
    pinMode(3,INPUT);
  }

  void loop() {
    x = digitalRead(3);
    if (x == LOW){
      mySerial.write(Mymessage,11); //Write the serial data
      Serial.println("OK");
      delay(1000); 
    }
    else{}
  }
