

extern "C" {
  typedef unsigned int        size_t;
#include "c_types.h"
#include "ets_sys.h"
#include "osapi.h"
#include "user_interface.h"

  //开启强制休眠功能
  //void wifi_fpm_open (void)

  //关闭强制休眠功能
  //void wifi_fpm_close (void)

  //唤醒强制休眠
  //void wifi_fpm_do_wakeup (void)

  //让系统强制休眠
  //int8 wifi_fpm_do_sleep (uint32 sleep_time_in_us)

}

#include "Global.h"

#include "startSSDP.h"
#include "startWebServer.h"
#include "startInitIO.h"
ESP8266WebServer HTTP(80);

void Global::ModuleSetup() {
  //  enum sleep_type { 
  //                   NONE_SLEEP_T = 0;   LIGHT_SLEEP_T,   MODEM_SLEEP_T 
  //                  };

  wifi_set_sleep_type(NONE_SLEEP_T);//LIGHT_SLEEP_T
  Serial.println("i'm,Ready");
  startInitIO();
  Serial.println("WIFI Connecting...");
  connectWIFI();
  Global::WiFiConnetcd();




}


void Global::loop() {
  ArduinoOTA.handle();
  HTTP.handleClient();
}


void Global::WiFiConnetcd() {
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(15, HIGH);
  Serial.println("Ready");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());

  Serial.println("starting WebServer...");

  startOTA();
  Serial.println("starting SSDP...");
  startSSDP();
  startWebServer();
}



