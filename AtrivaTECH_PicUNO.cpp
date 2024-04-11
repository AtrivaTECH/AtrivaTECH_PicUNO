/*
  AtrivaTECH_PicUNO.cpp - consists of function definitions specifically curated for the PicUNO RP2040 board
  by AtrivaTECH
  Created by Atul Ravi, April 8, 2024.
  Released into the public domain.
*/

#include "Arduino.h"
#include "AtrivaTECH_PicUNO.h"
void picuno::setit() 
{
  pinMode(2,OUTPUT); //Setting pins 2-5 as OUTPUTS
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
}
void picuno::lvlpins()
{
  digitalWrite(2,LOW); //Setting pins 2-5 LOW. 
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
}  
