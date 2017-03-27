// NathanDrake.cpp

#include "NathanDrake.h"

NathanDrake::NathanDrake()
{
	nombre = NULL;
	ataque = 0;
	defensa = 0;
	tieneHE = false;
	ciudad = NULL;
}
NathanDrake::NathanDrake(string nombre, int ataque, int defensa, bool tieneHE, string ciudad) : PSChar(nombre, ataque, defensa, tieneHE)
{
	this -> nombre = nombre;
	this -> ataque = ataque;
	this -> defensa = defensa;
	this -> tieneHE = tieneHE;
	this -> ciudad = ciudad;
}

// nombre
void NathanDrake::setNombre(string nombre)
{
	this -> nombre = nombre;
}
string NathanDrake::getNombre()
{
	return nombre;
}
// ataque
void NathanDrake::setAtaque(int ataque)
{
	this -> ataque = ataque;
}
int NathanDrake::getAtaque()
{
	return ataque;
}
// defensa
void NathanDrake::setDefensa(int defensa)
{
	this -> defensa = defensa;
}
int NathanDrake::getDefensa()
{
	return defensa;
}
// tesoro
void NathanDrake::setTieneTesoro(bool tieneTesoro)
{
        this -> tieneTesoro = tieneTesoro;
}
bool NathanDrake::getTieneTesoro()
{
        return tieneTesoro;
}
// ciudad
void NathanDrake::setCiudad(string ciudad)
{
	this -> ciudad = ciudad;
}
string NathanDrake::getCiudad()
{
	return megazord;
}

// toString
string NathanDrake::toString()
{
	return nombre;
}
