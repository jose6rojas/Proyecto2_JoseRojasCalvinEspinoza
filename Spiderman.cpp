#include "Spiderman.h"

Spiderman::Spiderman()
{
	nombre = "";
	ataque = 0;
	defensa = 0;
	tieneHE = false;
	comic = "";
}

Spiderman::Spiderman(string pNombre, int pAtaque, int pDefensa, bool pTieneHE, string pComic) : Superhero(pNombre, pAtaque, pDefensa, pTieneHE)
{
	nombre = pNombre;
	ataque = pAtaque;
	defensa = pDefensa;
	tieneHE = pTieneHE;
	comic = pComic;
}

void Spiderman::setComic(string comic) {
	this->comic = comic;
}

string Spiderman::getComic() {
	return this->comic;
}

void Spiderman::setAtaque(int ataque) {
	this->ataque = ataque;
}

int Spiderman::getAtaque() {
	return this->ataque;
}

void Spiderman::setDefensa(int defensa) {
	this->defensa = defensa;
}

int Spiderman::getDefensa() {
	return this->defensa;
}

void Spiderman::setTieneHE(bool tieneHE) {
	this->tieneHE = tieneHE;
}

bool Spiderman::getTieneHE() {
	 return this->tieneHE;
 }

void Spiderman::setNombre(string nombre) {
	 this->nombre = nombre;
 }

string Spiderman::getNombre() {
	return this->nombre;
}

string Spiderman::toString()
{
	return nombre;
}
