#include "stdinc.h"

void setupVoltage()
{
  adcAttachPin(A0);
  sensorData.voltage = 16000;
}

void loopVoltage()
{
  adcStart(A0);
  int32_t tmp = 10097 * adcEnd(A0) / 1000;
  sensorData.voltage = sensorData.voltage + (tmp - sensorData.voltage) / 50;
}
