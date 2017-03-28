#include "Run.h"

Run::Run()
{

}

int Run::run()
{
	initscr();
	printw("HOLA");

	Mario* player;
	fstream file("Mario.txt", ios::in | ios::out);
	file.open("Mario.txt");

	//Mario* fighter = new Mario("Mario", 100, 75, true, "Mushroom");


	if(file.is_open()){
	   player=new Mario();
	   file>>*player;
	 }

	cout << player -> getAtaque();

	 //file << *fighter;
	 file.close();

	getch();
	endwin();
	return 0;
}
