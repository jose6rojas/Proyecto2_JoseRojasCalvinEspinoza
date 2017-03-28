#include "Fighter.h"
#include "PowerRanger.h"
#include "NintendoChar.h"
#include "Superhero.h"
#include "PSChar.h"
#include "PowerRangerRojo.h"
#include "Mario.h"
#include "Spiderman.h"
#include "NathanDrake.h"
#include "Run.h"

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <ncurses.h>

using namespace std;

int main(int argc, char const *argv[]) {
	Run* prog = new Run();
	int retval = prog -> run();
	delete prog;
	return retval;
}
