// Fighter.h

#include <string>

using namespace std;

#pragma once

class Fighter
{
	protected:
		string nombre;

	public:
		Fighter();
		Fighter(string); // nombre, wins, losses

		// nombre
		virtual void setNombre(string);
		virtual string getNombre();

		// toString
		virtual void toString();
};
