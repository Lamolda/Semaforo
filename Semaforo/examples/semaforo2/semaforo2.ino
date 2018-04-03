/*
 * Ejemplo de dos semaforo con tres leds y sonido.
 * Se ha usado un solo buzzer para los dos semaforos.
 * 
 * Leo Lamolda para LMD APPS
 * experimentosconarduino.blogspot.com.es
 */

#include <Semaforo.h>

Semaforo miSemaforo1(2,3,4,12);
Semaforo miSemaforo2(8,9,10,12);

void setup() {  
}

void loop() {
  miSemaforo1.Rojo();
  delay(500);
  miSemaforo2.Verde();
  delay(3000);
  miSemaforo2.Rojo();
  delay(500);
  miSemaforo1.Verde();
  delay(3000);
}
