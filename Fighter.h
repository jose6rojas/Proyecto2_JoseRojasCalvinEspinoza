// Fighter.h

#include <string>
#include <sstream>

using namespace std;

#pragma once

class Fighter
{
	protected:
		string nombre;

	public:
		Fighter();
		Fighter(string); // nombre

		// nombre
		virtual void setNombre(string) = 0;
		virtual string getNombre() = 0;

		// toString
		virtual string toString() = 0;
		virtual int atacar() = 0;
};
