//Code for receiving data from another baord. And displaying on a LCD via I2C,
#include <Wire.h> 
#include <SoftwareSerial.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display
char Mymessage[10];
SoftwareSerial mySerial (0, 1);
void setup()
{
  mySerial.begin(9600);
  pinMode(0, INPUT);
  pinMode(1, OUTPUT);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  lcd.init();                      // initialize the lcd 
  lcd.backlight();
  lcd.setCursor(1,0);
  lcd.print("AtrivaTECH");
}


void loop()
{
  mySerial.readBytes(Mymessage,11);
  lcd.setCursor(1,0);
  Serial.print(Mymessage);
  lcd.print(String(Mymessage));
  delay(1000);
}
