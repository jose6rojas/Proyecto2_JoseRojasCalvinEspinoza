// NintendoChar.h

#include "Fighter.h"

#pragma once

class NintendoChar : public Fighter
{
	protected:
		int ataque;
		int defensa;
		bool tieneHammer; // hammer

	public:
		NintendoChar();
		NintendoChar(string, int, int, bool); // nombre, ataque, defensa, tieneHammer

		// ataque
		virtual void setAtaque(int);
		virtual int getAtaque();

		// defensa
		virtual void setDefensa(int);
		virtual int getDefensa();

		// hammer
		virtual void setTieneHammer(bool);
		virtual bool getTieneHammer();

		// METODOS DE LA CLASE Fighter
                // nombre
                virtual void setNombre(string);
                virtual string getNombre();

                // toString
                virtual string toString();
		virtual int atacar()  = 0;
};
