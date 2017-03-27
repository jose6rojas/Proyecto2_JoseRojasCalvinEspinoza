#include "Mario.h"

Mario::Mario()
{
	nombre = "";
	ataque = 0;
	defensa = 0;
	tieneHammer = false;
	kingdom = pKingdom
}

Mario::Mario(string pNombre, int pAtaque, int pDefensa, bool pTieneHammer, string pKingdom) : Mario(pNombre, pAtaque, pDefensa, pTieneHammer)
{
	nombre = pNombre;
	ataque = pAtaque;
	defensa = pDefensa;
	tieneHammer = pTieneHammer;
	kingdom = pKingdom
}

void Mario::setKingdom(string kingdom) {
	this->kingdom = kingdom;
}

string Mario::getKingdom() {
	return this->kingdom;
}

void Mario::setAtaque(int ataque) {
	this->ataque = ataque;
}

int Mario::getAtaque() {
	return this->ataque;
}

void Mario::setDefensa(int defensa) {
	this->defensa = defensa;
}

int Mario::getDefensa() {
	return this->defensa;
}

void Mario::setTieneHammer(bool tieneHammer) {
	this->tieneHammer = tieneHammer;
}

bool Mario::getTieneHammer() {
	 return this->tieneHammer;
 }

void Mario::setNombre(string nombre) {
	 this->nombre = nombre;
 }

string Mario::getNombre() {
	return this->nombre;
}

string Mario::toString()
{
	return nombre;
}
