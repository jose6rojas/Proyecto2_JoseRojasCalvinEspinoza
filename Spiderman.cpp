#include "Spiderman.h"

Spiderman::Spiderman()
{
	nombre = "";
	ataque = 0;
	defensa = 0;
	tieneHe = false;
	comic = pComic
}

Spiderman::Spiderman(string pNombre, int pAtaque, int pDefensa, bool pTieneHe, string pComic) : Superhero(pNombre, pAtaque, pDefensa, pTieneHe)
{
	nombre = pNombre;
	ataque = pAtaque;
	defensa = pDefensa;
	tieneHe = pTieneHe;
	comic = pComic
}

void Spiderman::setComic(string comic) {
	this->comic = comic;
}

string Spiderman::getComic() {
	return this->comic;
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

void NintendoChar::setTieneHe(bool tieneHe) {
	this->tieneHe = tieneHe;
}

bool NintendoChar::getTieneHe() {
	 return this->tieneHe;
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
