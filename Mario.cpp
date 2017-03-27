#include "Mario.h"

Mario::Mario()
{
	nombre = "";
	ataque = 0;
	defensa = 0;
	tieneHammer = false;
}

Mario::Mario(string pNombre, int pAtaque, int pDefensa, bool pTieneHammer, string pKingdom) : NintendoChar(pNombre, pAtaque, pDefensa, pTieneHammer)
{
	nombre = pNombre;
	ataque = pAtaque;
	defensa = pDefensa;
	tieneHammer = pTieneHammer;
	kingdom = pKingdom
}

void setKingdom(string kingdom) {
	this->kingdom = kingdom;
}

string getKingdom() {
	return this->kingdom;
} 

void NintendoChar::setAtaque(int ataque) {
	this->ataque = ataque;
}

int NintendoChar::getAtaque() {
	return this->ataque;
}

void NintendoChar::setDefensa(int defensa) {
	this->defensa = defensa;
}

int NintendoChar::getDefensa() {
	return this->defensa;
}

void NintendoChar::setTieneHammer(bool tieneHammer) {
	this->tieneHammer = tieneHammer;
}

bool NintendoChar::getTieneHammer() {
	 return this->tieneHammer;
 }

void NintendoChar::setNombre(string nombre) {
	 this->nombre = nombre;
 }

string NintendoChar::getNombre() {
	return this->nombre;
}

string NintendoChar::toString()
{
	return nombre;
}
