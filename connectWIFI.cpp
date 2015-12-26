#include "Global.h"

void connectWIFI() {
  const char* ssid = "ChinaNet-BAWORK";
  const char* password = "jiubugaosuni";
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  while (WiFi.waitForConnectResult() != WL_CONNECTED) {
    Serial.println("WIFI Connection Failed! retrying...");
    WiFi.begin(ssid, password);
    delay(5000);
    //    ESP.restart();
  }
}

