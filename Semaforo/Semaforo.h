/*
Semaforo.h - Libreria para control de luces de un Semaforo
Por Leo Lamolda, marzo de 2018, para LMDAPPS
experimentosconarduino.blogspot.es.com
*/
#ifndef Semaforo_h
#define Semaforo_h

#include "Arduino.h"

class Semaforo
{  
	public:
		Semaforo(int rojo, int amarillo, int verde, int buzzer);
		void Rojo();
		void Verde();
		void Cambia();
		bool EsRojo();
		bool EsVerde();
	private:
        int _rojo;
        int _amarillo;
        int _verde;
        int _buzzer;
} ;

#endif