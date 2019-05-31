//ENTRY(ID,  var,              rightshift,       resolution, unit,  name,                        minvalue,    maxvalue  )

ENTRY('1', controlState.spd,            0,       1.25e-3,    "1/s", "speed target",                  -5.0,         5.0  )
ENTRY('2', controlState.dSpd,           0,       1.25e-3,    "1/s", "speed diff target",             -5.0,         5.0  )
ENTRY('3', sensorData.voltage,          0,       0.001,        "V", "battery voltage",               20.0,        26.0  )
ENTRY('4', stp.getSpeed(),              0,       1.25e-7,    "1/s", "speed 1",                       -5.0,         5.0  )
ENTRY('5', stp2.getSpeed(),             0,       1.25e-7,    "1/s", "speed 2",                       -5.0,         5.0  )

ENTRY('a', sensorData.cpu[0],           0,       0.1,          "%", "cpu load 0",                     0.0,       100.0  )
ENTRY('s', sensorData.cpu[1],           0,       0.1,          "%", "cpu load 1",                     0.0,       100.0  )
ENTRY('d', sensorData.cpu[2],           0,       0.1,          "%", "cpu load 2",                     0.0,       100.0  )
ENTRY('f', sensorData.cpu[3],           0,       0.1,          "%", "cpu load 3",                     0.0,       100.0  )
ENTRY('g', sensorData.cpu[4],           0,       0.1,          "%", "cpu load 4",                     0.0,       100.0  )

ENTRY(0,   sensorData.voltage,          0,       0.0,          "-", "end of table",                   0.0,         0.0  )
