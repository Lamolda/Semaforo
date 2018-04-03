/*
 * Ejemplo de semaforo con tres leds y sonido.
 * Pasar de la luz roja a la verde y de esta a ambar parpadeando
 * con sonido intermitente para invidentes.
 * 
 * Leo Lamolda para LMD APPS
 * experimentosconarduino.blogspot.com.es
 */

#include <Semaforo.h>

Semaforo miSemaforo(2,3,4,12);

void setup() { 
}

void loop() {
  miSemaforo.Cambia();
  delay(3000);
}
