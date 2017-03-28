// PowerRangerRojo.h

#include "PowerRanger.h"

#pragma once

class PowerRangerRojo : public PowerRanger
{
	private:
		string megazord;

	public:
		friend ostream& operator<<(ostream& out, const PowerRangerRojo& m)
		{
		     out << m.nombre << "," << m.ataque << "," << m.defensa << "," << m.tieneHE << "," << m.megazord << endl;
		     return out;
		 }

		friend istream& operator>>(istream& in, PowerRangerRojo& m){
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
			stringstream (split[3]) >> m.tieneHE;
			m.megazord = split[4];


			return in;
		}

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
		int getDefensa();

		// habilidad especial
		void setTieneHE(bool);
		bool getTieneHE();

		// METODOS DE LA CLASE Fighter
		// nombre
		void setNombre(string);
		string getNombre();

		string toString();
		int atacar()
		{
			if (tieneHE)
				return ataque * 2;
			else
				return ataque;
		}
};
