// Mario.h

#include "NintendoChar.h"
#include <string>

#pragma once

class Mario : public NintendoChar
{
	private:
		string kingdom;

	public:
		Mario();
		Mario(string, int, int, bool, string);
		// nombre, ataque, defensa, tieneHammer, kingdom

		// kingdom
		void setKingdom(string);
		string getKindgom();

		// METODOS DE LA CLASE NintendoChar
		// ataque
		void setAtaque(int);
		int getAtaque();

		// defensa
		void setDefensa(int);
		double getDefensa();

		// hammer
		void setTieneHammer(bool);
		bool getTieneHammer();

		// METODOS DE LA CLASE Fighter
		// nombre
		void setNombre(string);
		string getNombre();

		string toString();
};
