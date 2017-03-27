#include "Superhero.h"

Superhero::Superhero()
{
	nombre = "";
	ataque = 0;
	defensa = 0;
	tieneHe = false;
}

Superhero::Superhero(string pNombre, int pAtaque, int pDefensa, bool pTieneHe) : Fighter(pNombre)
{
	nombre = pNombre;
	ataque = pAtaque;
	defensa = pDefensa;
	tieneHe = pTieneHe;
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

void Superhero::setTieneHe(bool tieneHe) {
	this->tieneHe = tieneHe;
}

bool Superhero::getTieneHe() {
	 return this->tieneHe;
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
