#include "stdinc.h"

void setupControl()
{
  controlPara.spd = 0;
}

void loopControl()
{
  controlState.spd = 100 * controlPara.spd;
  controlState.dSpd = 100 * controlPara.dSpd;

  stp.setTargetSpeed(controlState.spd - controlState.dSpd);
  stp2.setTargetSpeed(controlState.spd + controlState.dSpd);
}
