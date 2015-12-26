#include "Global.h"





void setup() {
  Serial.begin(115200);
  Serial.println("");
  Global::ModuleSetup();
  
}

void loop() {
  Global::loop();
}
