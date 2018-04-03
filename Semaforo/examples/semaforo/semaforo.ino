/*
 * Ejemplo de semaforo con tres leds y sonido.
 * Pasar de la luz roja a la verde y de esta a ambar parpadeando
 * con sonido intermitente para invidentes.
 * 
 * Leo Lamolda para LMD APPS
 * experimentosconarduino.blogspot.com.es
 */

#include <Semaforo.h>

Semaforo miSemaforo(5,6,7,9);

void setup() { 
}

void loop() {
  miSemaforo.Verde();
  delay(3000);
  miSemaforo.Rojo();
  delay(3000);
}
