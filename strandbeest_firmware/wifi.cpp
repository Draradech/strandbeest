#include "stdinc.h"

#include <WiFi.h>

const char* ssid = "strandbeest";
const char* passwd = "beeststrand";

void setupWifi()
{
  WiFi.mode(WIFI_AP);
  WiFi.softAP(ssid, passwd);
}
