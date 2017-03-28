// NathanDrake.h

#include "PSChar.h"

#pragma once

class NathanDrake : public PSChar
{
	private:
		string ciudad;

	public:
		friend ostream& operator<<(ostream& out, const NathanDrake& m)
		{
		     out << m.nombre << "," << m.ataque << "," << m.defensa << "," << m.tieneTesoro << "," << m.ciudad << endl;
		     return out;
		 }

		friend istream& operator>>(istream& in, NathanDrake& m){
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
			stringstream (split[3]) >> m.tieneTesoro;
			m.ciudad = split[4];


			return in;
		}

		NathanDrake();
		NathanDrake(string, int, int, bool, string);
		// nombre, ataque, defensa, tieneTesoro, ciudad

		// ciudad
		void setCiudad(string);
		string getCiudad();

		// METODOS DE LA CLASE PSChar
		// ataque
		void setAtaque(int);
		int getAtaque();

		// defensa
		void setDefensa(int);
		int getDefensa();

		// habilidad especial
		void setTieneTesoro(bool);
		bool getTieneTesoro();

		// METODOS DE LA CLASE Fighter
		// nombre
		void setNombre(string);
		string getNombre();

		string toString();

		int atacar()
		{
			if (tieneTesoro)
				return ataque * 2;
			else
				return ataque;
		}
};
