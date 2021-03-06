#include "stdinc.h"

Stepper stp(UPDATE_USEC, 13, 14, true);
Stepper stp2(UPDATE_USEC, 15, 16, false);

void IRAM_ATTR isrStepper()
{
  stp.update();
  stp2.update();
}

void setupStepper()
{
  pinMode(12, OUTPUT);
  actuator.tempDisabled = true;
  actuator.tempDisabled = false;
  digitalWrite(12, actuator.tempDisabled);

  stp.setTargetSpeed(0);
  stp2.setTargetSpeed(0);
  stp.setAcc(2000);
  stp2.setAcc(2000);
}

void loopStepper()
{
  if(sensorData.voltage < 10000)
  {
    actuator.deactivated = true;
    ledColor(1,0,0);
  }
  else if(sensorData.voltage < 10500)
  {
    ledColor(1,0,0);
  }
  else if(sensorData.voltage < 11000)
  {
    ledColor(1,1,0);
  }
  else
  {
    ledColor(0,1,0);
  }
  if(actuator.deactivated)
  {
    actuator.tempDisabled = true;
  }
  digitalWrite(12, actuator.tempDisabled);
  if(actuator.tempDisabled)
  {
    stp.reset();
    stp2.reset();
  }
}
