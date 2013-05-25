#include <Esplora.h>

void setup(){
  Serial.begin(9600);
}

void loop(){
  int val = Esplora.readLightSensor();
  Serial.print(val);
  Serial.print("\t");
  if (val < 500) {
    Esplora.writeRGB(255,255,255);
    Serial.println("LIGHT IS LOW");
  }
  else {
    Esplora.writeRGB(0,0,0);
    Serial.println("LIGHT IS HIGH");
  }
  delay(300);
}
