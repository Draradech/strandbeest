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
  setupWeb();
}

void loop()
{
  if(clk.expired())
  {
    loopVoltage();
    loopControl();
    loopStepper();

    loopWeb();
    loopInputOutput();
  }
  loopOta();
}
