// Spiderman.h

#include "Superhero.h"

#pragma once

class Spiderman : public Superhero
{
	private:
		string comic;

	public:
		friend ostream& operator<<(ostream& out, const Spiderman& m)
		{
		     out << m.nombre << "," << m.ataque << "," << m.defensa << "," << m.tieneHE << "," << m.comic << endl;
		     return out;
		 }

		friend istream& operator>>(istream& in, Spiderman& m){
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
			m.comic = split[4];


			return in;
		}

		Spiderman();
		Spiderman(string, int, int, bool, string);
		// nombre, ataque, defensa, tieneHE, comic

		// comic
		void setComic(string);
		string getComic();

		// METODOS DE LA CLASE Superhero
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
