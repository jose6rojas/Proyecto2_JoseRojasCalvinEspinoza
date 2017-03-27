// PowerRangerRojo.h

#include "PowerRanger.h"

#pragma once

class PowerRangerRojo : public PowerRanger
{
	private:
		string megazord;
	
	public:
		PowerRangerRojo();
		PowerRangerRojo(string, string, int, int, int, int, bool, string);
		// nombre, AKA, wins, losses, ataque, defensa, tieneHE, megazord
		
		// megazord
		void setMegazord(string);
		string getMegazord();
		
		// METODOS DE LA CLASE PowerRanger
		// ataque
		virtual void setAtaque(int);
		virtual int getAtaque();
		
		// defensa
		virtual void setDefensa(int);
		virtual double getDefensa();
		
		// habilidad especial
		virtual void setTieneHE(bool);
		virtual bool getTieneHE();
};
