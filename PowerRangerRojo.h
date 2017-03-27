// PowerRangerRojo.h

#include "PowerRanger.h"

#pragma once

class PowerRangerRojo : public PowerRanger
{
	private:
		string megazord;

	public:
		PowerRangerRojo();
		PowerRangerRojo(string, int, int, bool, string);
		// nombre, ataque, defensa, tieneHE, megazord

		// megazord
		void setMegazord(string);
		string getMegazord();

		// METODOS DE LA CLASE PowerRanger
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
