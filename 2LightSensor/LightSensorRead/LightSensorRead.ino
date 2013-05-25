#include <Esplora.h>

void setup()
{
  Serial.begin(9600);
} 

void loop()
{
  int value = Esplora.readLightSensor();
  Serial.println(value);

  delay(1000);
}
