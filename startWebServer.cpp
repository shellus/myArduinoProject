


#include "Global.h"

void startWebServer() {
  HTTP.on("/index.html", HTTP_GET, []() {
    HTTP.send(200, "text/plain", "Hello World!<br>");
  });
  HTTP.on("/description.xml", HTTP_GET, []() {
    SSDP.schema(HTTP.client());
  });
  HTTP.begin();

}

