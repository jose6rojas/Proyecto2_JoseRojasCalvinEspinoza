// PowerRangerRojo.cpp

#include "PowerRangerRojo.h"

PowerRangerRojo::PowerRangerRojo()
{
	nombre = "";
	ataque = 0;
	defensa = 0;
	tieneHE = false;
	megazord = "";
}
PowerRangerRojo::PowerRangerRojo(string nombre, int ataque, int defensa, bool tieneHE, string megazord) : PowerRanger(nombre, ataque, defensa, tieneHE)
{
	this -> nombre = nombre;
	this -> ataque = ataque;
	this -> defensa = defensa;
	this -> tieneHE = tieneHE;
	this -> megazord = megazord;
}

// nombre
void PowerRangerRojo::setNombre(string nombre)
{
	this -> nombre = nombre;
}
string PowerRangerRojo::getNombre()
{
	return nombre;
}
// ataque
void PowerRangerRojo::setAtaque(int ataque)
{
	this -> ataque = ataque;
}
int PowerRangerRojo::getAtaque()
{
	return ataque;
}
// defensa
void PowerRangerRojo::setDefensa(int defensa)
{
	this -> defensa = defensa;
}
int PowerRangerRojo::getDefensa()
{
	return defensa;
}
// habilidad especial
void PowerRangerRojo::setTieneHE(bool tieneHE)
{
        this -> tieneHE = tieneHE;
}
bool PowerRangerRojo::getTieneHE()
{
        return tieneHE;
}
// megazord
void PowerRangerRojo::setMegazord(string megazord)
{
	this -> megazord = megazord;
}
string PowerRangerRojo::getMegazord()
{
	return megazord;
}

// toString
string PowerRangerRojo::toString()
{
	return nombre;
}
