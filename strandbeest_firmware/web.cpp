#include "stdinc.h"

#include <WebServer.h>

WebServer server(80);

void handleIndex()
{
  server.send(200, "text/html",
    String("") +
    "<html><head><style>body{font-size:500\%; text-align: center; font-family: sans-serif;background-color: #55aabb} a{color: #000000;}</style></head><body><h1>Strandbeest</h1>" +
    "<p>Voltage: " + sensorData.voltage * 0.001 + "V <a href=\"/\">upd</a></p>" +
    "<p>Speed: " + controlPara.spd + " <a href=\"/w\">+++++</a> <a href=\"/s\">-----</a></p>" +
    "<p>Diff: " + controlPara.dSpd + " <a href=\"/a\">+++++</a> <a href=\"/d\">-----</a></p>" +
    "<p>Motors: " + (actuator.tempDisabled ? "Off" : "On") + " <a href=\"/t\">toggle</a></p>" +
    "</body></html>"
  );
}

void handleW()
{
  controlPara.spd += 5;
  handleIndex();
}

void handleA()
{
  controlPara.dSpd++;
  handleIndex();
}

void handleS()
{
  controlPara.spd -= 5;
  handleIndex();
}

void handleD()
{
  controlPara.dSpd--;
  handleIndex();
}

void handleT()
{
  actuator.tempDisabled = !actuator.tempDisabled;
  handleIndex();
}

void setupWeb()
{
  server.on("/w", handleW);
  server.on("/a", handleA);
  server.on("/s", handleS);
  server.on("/d", handleD);
  server.on("/t", handleT);
  server.onNotFound(handleIndex);

  server.begin();
}

void loopWeb()
{
  server.handleClient();
}

