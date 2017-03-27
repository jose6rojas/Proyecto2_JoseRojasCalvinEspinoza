// Spiderman.h

#include "Superhero.h"

#pragma once

class Spiderman : public Superhero
{
	private:
		string comic;

	public:
		Spiderman();
		Spiderman(string, int, int, bool, string);
		// nombre, ataque, defensa, tieneHE, comic

		// megazord
		void setMegazord(string);
		string getMegazord();

		// METODOS DE LA CLASE Superhero
		// ataque
		void setAtaque(int);
		int getAtaque();

		// defensa
		void setDefensa(int);
		double getDefensa();

		// habilidad especial
		void setTieneHE(bool);
		bool getTieneHE();

		// METODOS DE LA CLASE Fighter
		// nombre
		void setNombre(string);
		string getNombre();

		string toString();
};
