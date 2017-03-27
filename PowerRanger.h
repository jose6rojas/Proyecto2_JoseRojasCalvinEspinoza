// PowerRanger.h

#include "Fighter.h"

#pragma once

class PowerRanger : public Fighter
{
	protected:
		int ataque;
		int defensa;
		bool tieneHE; // habilidad especial

	public:
		PowerRanger();
		PowerRanger(string, int, int, int, int, bool); // nombre, wins, losses, ataque, defensa, tieneHE

		// ataque
		virtual void setAtaque(int);
		virtual int getAtaque();

		// defensa
		virtual void setDefensa(int);
		virtual double getDefensa();

		// habilidad especial
		virtual void setTieneHE(bool);
		virtual bool getTieneHE();

		// METODOS DE LA CLASE Fighter
                // nombre
                void setNombre(string);
                string getNombre();

                // wins
                void setWins(int);
                int getWins();

                // losses
                void setLosses(int);
                int getLosses();

                // toString
                void toString();
};
