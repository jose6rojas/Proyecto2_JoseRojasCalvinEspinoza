// Fighter.h

#include <string>

using namespace std;

#pragma once

class Fighter
{
	protected:
		string nombre;
		string AKA; // seudonimo/apodo
		int wins; // peleas ganadas
		int losses; // peleas perdidas
	
	public:
		Fighter();
		Fighter(string, string, int, int); // nombre, AKA, wins, losses
		
		// nombre
		virtual void setNombre(string);
		virtual string getNombre();
		
		// AKA
		virtual void setAKA(string);
		virtual string getAKA();
		
		// wins
		virtual void setWins(int);
		virtual int getWins();
		
		// losses
		virtual void setLosses(int);
		virtual int getLosses();
		
		// toString
		virtual void toString();
};
