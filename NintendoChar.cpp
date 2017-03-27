#include "NintendoChar.h"

NintendoChar::NintendoChar()
{
	nombre = "";
	ataque = 0;
	defensa = 0;
	tieneHammer = false;
}

NintendoChar::NintendoChar(string pNombre, int pAtaque, int pDefensa, bool pTieneHammer) : Fighter(pNombre)
{
	nombre = pNombre;
	ataque = pAtaque;
	defensa = pDefensa;
	tieneHammer = pTieneHammer;
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
