// PlayStationCharacter.h

#include "Fighter.h"

#pragma once

class PSChar : public Fighter
{
	protected:
		int ataque;
		int defensa;
		bool tieneTesoro; // habilidad especial

	public:
		PSChar();
		PSChar(string, int, int, bool); // nombre, ataque, defensa, tieneHE

		// ataque
		virtual void setAtaque(int);
		virtual int getAtaque();

		// defensa
		virtual void setDefensa(int);
		virtual int getDefensa();

		// habilidad especial
		virtual void setTieneTesoro(bool);
		virtual bool getTieneTesoro();

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
