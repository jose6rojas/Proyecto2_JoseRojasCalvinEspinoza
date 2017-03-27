// NathanDrake.h

#include "PSChar.h"

#pragma once

class NathanDrake : public PSChar
{
	private:
		string ciudad;

	public:
		NathanDrake();
		NathanDrake(string, int, int, bool, string);
		// nombre, ataque, defensa, tieneHE, ciudad

		// ciudad
		void setCiudad(string);
		string getCiudad();

		// METODOS DE LA CLASE PSChar
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
