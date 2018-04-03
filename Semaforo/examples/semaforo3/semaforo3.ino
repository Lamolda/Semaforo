/*
 * Ejemplo de dos semaforos con tres leds y sonido.
 * Se ha usado un solo buzzer para los dos.
 * Pulsador conectado al pin 7.
 * Un semaforo está en rojo y otro en verde. Al pulsar
 * cambian de estado, el verde a ambar intermitente y rojo
 * y el rojo pasa a verde.
 * 
 * Leo Lamolda para LMD APPS
 * experimentosconarduino.blogspot.com.es
 */

#include <Semaforo.h>

Semaforo miSemaforo1(2,3,4,12);
Semaforo miSemaforo2(8,9,10,12);
int pulsador;

void setup() {  
  pulsador=7;
  pinMode(pulsador,INPUT);
  digitalWrite(pulsador,HIGH);
  miSemaforo1.Verde();
  miSemaforo2.Rojo();
}

void loop() {
  if (!digitalRead(pulsador)){
    while(!digitalRead(pulsador)){}
    if (miSemaforo1.EsRojo()){
      miSemaforo2.Rojo();
      delay(500);
      miSemaforo1.Verde();
    }else{
      miSemaforo1.Rojo();
      delay(500);
      miSemaforo2.Verde();
    }
  }
}
