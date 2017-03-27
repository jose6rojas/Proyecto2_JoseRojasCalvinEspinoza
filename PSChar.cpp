// PlayStationCharacter.cpp

#include "PSChar.h"

PSChar::PSChar()
{
	nombre = "";
	ataque = 0;
	defensa = 0;
	tieneHE = false;
}
PSChar::PSChar(string nombre, int ataque, int defensa, bool tieneHE) : Fighter(nombre)
{
	this -> nombre = nombre;
	this -> ataque = ataque;
	this -> defensa = defensa;
	this -> tieneHE = tieneHE;
}

// nombre
void PSChar::setNombre(string nombre)
{
	this -> nombre = "";
}
string PSChar::getNombre()
{
	return NULL;
}
// ataque
void PSChar::setAtaque(int ataque)
{
	this -> ataque = 0;
}
int PSChar::getAtaque()
{
	return 0;
}
// defensa
void PSChar::setDefensa(int defensa)
{
	this -> defensa = 0;
}
int PSChar::getDefensa()
{
	return 0;
}
// habilidad especial
void PSChar::setTieneTesoro(bool tieneTesoro)
{
        this -> tieneHE = false;
}
bool PSChar::getTieneTesoro()
{
        return false;
}

// toString
string PSChar::toString()
{
	return NULL;
}
