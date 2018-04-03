/*
Semaforo.h - Libreria para control de luces de un Semaforo
Por Leo Lamolda, marzo de 2018, para LMDAPPS
experimentosconarduino.blogspot.es.com
*/

#include "Semaforo.h"

Semaforo::Semaforo(int rojo, int amarillo, int verde, int buzzer)
{ 
	pinMode(rojo,OUTPUT);     digitalWrite(rojo,LOW);
    pinMode(amarillo,OUTPUT); digitalWrite(amarillo,LOW);
    pinMode(verde,OUTPUT);    digitalWrite(verde,LOW);
    pinMode(buzzer,OUTPUT);   digitalWrite(buzzer,LOW);
	_rojo = rojo;
    _amarillo=amarillo;
    _verde=verde;
    _buzzer=buzzer;             
}

void Semaforo::Rojo(){
	digitalWrite(_rojo,LOW);
    digitalWrite(_verde,LOW);
    for (int i=0;i<5;i++){
		digitalWrite(_amarillo,HIGH);
        digitalWrite(_buzzer,HIGH);
        delay(200);
        digitalWrite(_amarillo,LOW);
        digitalWrite(_buzzer,LOW);
        delay(200);
    } 
	digitalWrite(_rojo,HIGH);
}

void Semaforo::Verde(){
	digitalWrite(_rojo,LOW);
    digitalWrite(_amarillo,LOW);
    digitalWrite(_verde,HIGH);
}

void Semaforo::Cambia(){
	if (EsVerde()) Rojo();
		else Verde();	
}

bool Semaforo::EsRojo(){
	return digitalRead(_rojo);
}

bool Semaforo::EsVerde(){
	return digitalRead(_verde);
}