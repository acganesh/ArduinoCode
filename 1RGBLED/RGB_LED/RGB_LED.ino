#include <Esplora.h>

void setup(){
}

void loop(){
  Esplora.writeRGB(255,0,0); // Writing the LED TO RED
  delay(500);
  Esplora.writeRGB(0,255,0);
  delay(500);
  Esplora.writeRGB(0,0,255);
  delay(500);
  
  Esplora.writeRGB(255,255,0);
  delay(500);
  
  Esplora.writeRGB(0,255,255);
  delay(500);
  
  Esplora.writeRGB(255,0,255);
  delay(500);
  
  Esplora.writeRGB(255,145,0);
  delay(500);
  
  Esplora.writeRGB(255,255,255);
  delay(500);
}

/*
RED

GREEN

BLUE

R, G

G, B

R, B

Custom: Orange;
R, G, B
*/



