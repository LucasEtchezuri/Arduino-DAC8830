#ifndef DAC8830_h
#define DAC8830_h

#include "Arduino.h"

class DAC8830 {
  public:
    DAC8830();
    uint8_t DAC8830_CS_PIN;
    uint8_t DAC8830_CLK_PIN;
    uint8_t DAC8830_MOSI_PIN;
    int16_t DAC8830_REFERENCE_MV;
    void begin(uint8_t clk_pin, uint8_t mosi_pin, uint8_t cs_pin);
    void writeDAC(uint16_t value);
    void setReference(int16_t value);
    void setMillivolts(uint16_t value);
  };
#endif