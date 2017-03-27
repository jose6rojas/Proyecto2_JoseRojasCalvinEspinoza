// Fighter.h

#include <string>

using namespace std;

#pragma once

class Fighter
{
	protected:
		string nombre;
		int wins; // peleas ganadas
		int losses; // peleas perdidas

	public:
		Fighter();
		Fighter(string, int, int); // nombre, wins, losses

		// nombre
		virtual void setNombre(string);
		virtual string getNombre();

		// wins
		virtual void setWins(int);
		virtual int getWins();

		// losses
		virtual void setLosses(int);
		virtual int getLosses();

		// toString
		virtual void toString();
};
