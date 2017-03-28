// Fighter.h

#include <string>
#include <sstream>

using namespace std;

#pragma once

class Fighter
{
	protected:
		string nombre;
		int defensa;

	public:
		Fighter();
		Fighter(string); // nombre

		// nombre
		virtual void setNombre(string) = 0;
		virtual string getNombre() = 0;

		virtual void setDefensa(int) = 0;
		virtual int getDefensa() = 0;
/**
		virtual void setAtaque(int) = 0;
		virtual int getAtaque() = 0;
*/
		// toString
		virtual string toString() = 0;
		virtual int atacar() = 0;
};
