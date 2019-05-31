#ifdef _DEFINE_RAM_VARS_
#define global
#else
#define global extern
#endif

typedef struct SRawSensorData
{
  int16_t voltage;
  int16_t cpu[5];
} SSensorData;

typedef struct
{
  bool deactivated;
  bool tempDisabled;
} SActuator;

typedef struct
{
  int16_t spd;
  int16_t dSpd;
} SControlPara;

typedef struct
{
  int16_t spd;
  int16_t dSpd;
} SControlState;

global SSensorData sensorData;
global SActuator actuator;
global SControlPara controlPara;
global SControlState controlState;

extern Clock1 clk;
extern Stepper stp;
extern Stepper stp2;

