/*
  This example shows how to set a voltage in a DAC8830.
  Lucas Etchezuri 30/06/2020
*/

#define CS_PIN 18

#include "DAC8830.h"

DAC8830 dac;

void setup()
{
  delay(100);
  dac.begin(14, 13, CS_PIN);   //(CLOCK, MOSI, CS)
  dac.setReference(3300);   // This function set the reference voltage for calculate millivolts. Used in setMillivolts funcion !! 
}

void loop()
{
  dac.writeDAC(15000);    //  Output volage = 15000 * REFERENCE VOLAGE / 65535
  delay(2000);
  
  dac.setMillivolts(1000);  // Set the output voltage to 3000 mv.  This function use setReference.  use setReference BEFORE use this function.
  delay(2000);

}
