#include "Superhero.h"

Superhero::Superhero()
{
	nombre = "";
	ataque = 0;
	defensa = 0;
	tieneHE = false;
}

Superhero::Superhero(string pNombre, int pAtaque, int pDefensa, bool pTieneHE) : Fighter(pNombre)
{
	nombre = pNombre;
	ataque = pAtaque;
	defensa = pDefensa;
	tieneHE = pTieneHE;
}
void Superhero::setAtaque(int ataque) {
	this->ataque = ataque;
}

int Superhero::getAtaque() {
	return this->ataque;
}

void Superhero::setDefensa(int defensa) {
	this->defensa = defensa;
}

int Superhero::getDefensa() {
	return this->defensa;
}

void Superhero::setTieneHE(bool tieneHE) {
	this->tieneHE = tieneHE;
}

bool Superhero::getTieneHE() {
	 return this->tieneHE;
 }

void Superhero::setNombre(string nombre) {
	 this->nombre = nombre;
 }

string Superhero::getNombre() {
	return this->nombre;
}

string Superhero::toString()
{
	return nombre;
}
