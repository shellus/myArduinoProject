#include <ESP8266WiFi.h>
#include <ESP8266mDNS.h>
#include <WiFiUdp.h>
#include <ArduinoOTA.h>
#include <ESP8266WebServer.h>
#include <ESP8266SSDP.h>

extern ESP8266WebServer HTTP;

#include "connectWIFI.h"
#include "startSSDP.h"
#include "startOTA.h"
#include "startWebServer.h"


#ifndef GLOBAL_INIT
#define GLOBAL_INIT


#endif

void startOTA();

class Global
{

  public:
    static void ModuleSetup();
    static void WiFiConnetcd();
    static void loop();


};

