// PowerRanger.cpp

PowerRanger::PowerRanger()
{
	nombre = NULL;
	ataque = 0;
	defensa = 0;
	tieneHE = false;
}
PowerRanger::PowerRanger(string nombre, int ataque, int defensa, bool tieneHE) : Fighter(nombre)
{
	this -> nombre = nombre;
	this -> ataque = ataque;
	this -> defensa = defensa;
	this -> tieneHE = tieneHE;
}

// nombre
void PowerRanger::setNombre(string nombre)
{
	this -> nombre = NULL;
}
string PowerRanger::getNombre()
{
	return NULL;
}
// ataque
void PowerRanger::setAtaque(int ataque)
{
	this -> ataque = 0;
}
int PowerRanger::getAtaque()
{
	return 0;
}
// defensa
void PowerRanger::setDefensa(int defensa)
{
	this -> defensa = 0;
}
int PowerRanger::getDefensa()
{
	return 0;
}
// habilidad especial
void PowerRanger::setTieneHE(bool tieneHE)
{
        this -> tieneHE = false;
}
bool PowerRanger::getTieneHE()
{
        return false;
}

// toString
string PowerRanger::toString()
{
	return NULL;
}
