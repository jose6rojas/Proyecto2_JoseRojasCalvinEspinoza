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

void Spiderman::setTieneHe(bool tieneHe) {
	this->tieneHe = tieneHe;
}

bool Spiderman::getTieneHe() {
	 return this->tieneHe;
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
