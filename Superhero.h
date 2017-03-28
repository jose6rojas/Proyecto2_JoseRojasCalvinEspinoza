// Superhero.h

#include "Fighter.h"

#pragma once

class Superhero : public Fighter
{
	protected:
		int ataque;
		int defensa;
		bool tieneHE; // habilidad especial

	public:
		Superhero();
		Superhero(string, int, int, bool); // nombre, ataque, defensa, tieneHE

		// ataque
		virtual void setAtaque(int);
		virtual int getAtaque();

		// defensa
		virtual void setDefensa(int);
		virtual int getDefensa();

		// hammer
		virtual void setTieneHE(bool);
		virtual bool getTieneHE();

		// METODOS DE LA CLASE Fighter
                // nombre
                virtual void setNombre(string);
                virtual string getNombre();

                // toString
                virtual string toString();
		virtual int atacar() = 0;
		/*
		{
			if (tieneHammer)
				return ataque * 2;
			else
				return ataque;
		}*/
};
