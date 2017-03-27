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
		PowerRanger(string, int, int, bool); // nombre, ataque, defensa, tieneHE

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
                virtual void setNombre(string);
                virtual string getNombre();

                // toString
                virtual void toString();
};