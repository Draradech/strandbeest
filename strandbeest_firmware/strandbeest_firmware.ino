#include "stdinc.h"

void setup()
{
  setupWifi();
  setupOta();
  setupInputOutput();
  setupLed();
  setupClock();
  setupVoltage();
  setupStepper();
  setupControl();
}

void loop()
{
  if(clk.expired())
  {
    loopVoltage();
    loopControl();
    loopStepper();

    loopInputOutput();
  }
  loopOta();
}
