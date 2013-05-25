#include <Esplora.h>

void setup(){
}

void loop(){
  Esplora.writeRGB(255,0,0); // Make LED Red
  delay(500); //Wait 1/2 second (500 ms)
  
  Esplora.writeRGB(0,255,0); // Make LED Green
  delay(500); // Wait 1/2 second (500 ms)
  
  Esplora.writeRGB(0,0,255); // Make LED Blue 
  delay(500); // etc.
  
  Esplora.writeRGB(255,255,0); // Make LED Red+Green = Yellow
  delay(500);
  
  Esplora.writeRGB(0,255,255); // Make LED Green+Blue = Light Blue
  delay(500);
  
  Esplora.writeRGB(255,0,255); // Make LED Red+Blue = Purple
  delay(500);
  
  Esplora.writeRGB(255,145,0); // Make LED Custom Color: Orange
  delay(500);
  
  Esplora.writeRGB(255,255,255); // Make LED Red+Green+Blue = Write
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



