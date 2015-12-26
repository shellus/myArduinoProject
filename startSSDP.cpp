#include "Global.h"

void startSSDP() {
  SSDP.setSchemaURL("description.xml");
  SSDP.setHTTPPort(80);
  SSDP.setName("jizhi");
  SSDP.setSerialNumber("001788102201");
  SSDP.setURL("index.html");
  SSDP.setModelName("Philips hue bridge 2012");
  SSDP.setModelNumber("929000226503");
  SSDP.setModelURL("http://www.meethue.com");
  SSDP.setManufacturer("Royal Philips Electronics");
  SSDP.setManufacturerURL("http://www.philips.com");
  SSDP.begin();
}

