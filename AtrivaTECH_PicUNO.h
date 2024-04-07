/*
  AtrivaTECH_PicUNO.h - consists of functions specifically curated for the PicUNO RP2040 board
  by AtrivaTECH
  Created by Atul Ravi, April 8, 2024.
  Released into the public domain.
*/
#ifndef AtrivaTECH_PicUNO_h
#define AtrivaTECH_PicUNO_h

#include "Arduino.h"

#define LED_BUILTIN  14 //Defining 14 as LED-BUILTIN

class picuno
{
  public:
    void lvlpins();
    void setit();
  private:
    int _pin;
};

#endif
