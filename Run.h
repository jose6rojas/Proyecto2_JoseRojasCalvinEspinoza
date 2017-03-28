#include "Fighter.h"
#include "PowerRanger.h"
#include "NintendoChar.h"
#include "Superhero.h"
#include "PSChar.h"
#include "PowerRangerRojo.h"
#include "Mario.h"
#include "Spiderman.h"
#include "NathanDrake.h"

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <ncurses.h>

using namespace std;

class Run {
private:
	/* data */
	vector<string> names;
	vector<Fighter*> fighters;


public:
	Run();
	int run();

	void leerFighters(vector<string>,vector<Fighter*>);
	void agregarFighter();

	void imprimirVector(vector<string>);
	void imprimirFighter(vector<Fighter*>);

	//virtual ~Run ();
};
