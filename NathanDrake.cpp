// NathanDrake.cpp

#include "NathanDrake.h"

NathanDrake::NathanDrake()
{
	nombre = "";
	ataque = 0;
	defensa = 0;
	tieneTesoro = false;
	ciudad = "";
}
NathanDrake::NathanDrake(string nombre, int ataque, int defensa, bool tieneTesoro, string ciudad) : PSChar(nombre, ataque, defensa, tieneTesoro)
{
	this -> nombre = nombre;
	this -> ataque = ataque;
	this -> defensa = defensa;
	this -> tieneTesoro = tieneTesoro;
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
	return ciudad;
}

// toString
string NathanDrake::toString()
{
	return nombre;
}
