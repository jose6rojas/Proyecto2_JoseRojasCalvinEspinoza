// Mario.h

#include "NintendoChar.h"
#include <string>


#pragma once

class Mario : public NintendoChar
{
	private:
		string kingdom;

	public:
		friend ostream& operator<<(ostream& out, const Mario& m)
		{
	             out << m.nombre << "," << m.ataque << "," << m.defensa << "," << m.tieneHammer << "," << m.kingdom << endl;
	             return out;
	         }

		friend istream& operator>>(istream& in, Mario& m){
	       		string buffer;
	            	getline(in,buffer);



	             	string split[5];
	             	int str = 0;

	             	for(int i = 0;i<buffer.size();i++){
	       	  		if(buffer[i]!=','){
	                     		split[str].append(buffer,i,1);

	                 	}else{
	                     		str++;
	                  	}
	             	}

	             	m.nombre = split[0];
			stringstream (split[1]) >> m.ataque;
			stringstream (split[2]) >> m.defensa;
	   		stringstream (split[3]) >> m.tieneHammer;
		        m.kingdom = split[4];


	             	return in;
	    	}

		Mario();
		Mario(string, int, int, bool, string);
		// nombre, ataque, defensa, tieneHammer, kingdom

		// kingdom
		void setKingdom(string);
		string getKingdom();

		// METODOS DE LA CLASE NintendoChar
		// ataque
		void setAtaque(int);
		int getAtaque();

		// defensa
		void setDefensa(int);
		int getDefensa();

		// hammer
		void setTieneHammer(bool);
		bool getTieneHammer();

		// METODOS DE LA CLASE Fighter
		// nombre
		void setNombre(string);
		string getNombre();

		string toString();
};
