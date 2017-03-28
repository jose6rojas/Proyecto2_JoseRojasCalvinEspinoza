#include "Run.h"

Run::Run() { }

int Run::run()
{
	vector<string> names;
	vector<Fighter*> fighters;

	initscr();
	// printw("HOLA");
	// leerFighters(names, fighters);
	// strinstream menu;
	char opc;

	/* menu << "MENU" << endl
	<< "1. Agregar Fighter" << endl
	<< "2. Listar Fighters" << endl
	<< "3. Realizar Simulacion" << endl;
	cout << menu.str();
	cin >> opc; */

	start_color();
	init_pair(1, COLOR_WHITE, COLOR_BLUE);
	attron(COLOR_PAIR(1));
	printw("BATTLE ROYALE");
	attroff(COLOR_PAIR(1));
	printw("\n");
	printw("1. Agregar Fighter\n");
  	printw("2. Listar Fighters\n");
  	printw("3. Realizar Simulacion\n");
	printw("Ingrese su opcion: ");
	opc = getch();

	stringstream name;
	ifstream archivo;
	archivo.open("Fighters.txt");
	while (!archivo.eof())
	{
		string buffer;
		getline(archivo,buffer);

		string split[10];
		int str = 0;

		for(int i = 0; i < buffer.size();i++){
			if(buffer[i]!=',') {
				split[str].append(buffer,i,1);
			} else {
				str++;
			}
		}

		for (int i = 0; i < str; i++) {
			names.push_back(split[i]);
		}
	}

	for (int i = 0; i < names.size(); i++) {
		if (names[i] == "Mario")
		{
			Mario* player;
			ifstream archivo;
			archivo.open("Mario.txt");
			if(archivo.is_open())
			{
				player = new Mario();
				archivo >> *player;
				fighters.push_back(player);
			}
		}
		if (names[i] == "NathanDrake")
		{
			NathanDrake* player;
			ifstream archivo;
			archivo.open("NathanDrake.txt");
			if(archivo.is_open())
			{
				player = new NathanDrake();
				archivo >> *player;
				fighters.push_back(player);
			}
		}
		if (names[i] == "PowerRangerRojo")
		{
			PowerRangerRojo* player;
			ifstream archivo;
			archivo.open("PowerRangerRojo.txt");
			if(archivo.is_open())
			{
				player = new PowerRangerRojo();
				archivo >> *player;
				fighters.push_back(player);
			}
		}
		if (names[i] == "Spiderman")
		{
			Spiderman* player;
			ifstream archivo;
			archivo.open("Spiderman.txt");
			if(archivo.is_open())
			 {
				player = new Spiderman();
				archivo >> *player;
				fighters.push_back(player);
			 }
		}
	}
	if (opc == '1')
	{
		agregarFighter();
	}
	else if (opc == '2')
	{
		//imprimirVector(names);
		imprimirFighter(fighters);
		getch();
	}
	else if (opc == '3')
	{
		char opc1, opc2;
		Fighter* peleador1, peleador2;
		printw("\n");
		printw("ELEGIR EL PRIMER PELEADOR");
		imprimirFighter(fighters);
		opc1 = getch();
		printw("\n");
		printw("ELEGIR EL SEGUNDO PELEADOR");
		imprimirFighter(fighters);
		opc2 = getch();

		peleador1 = fighters[opc1-1];
		peleador2 = fighters[opc2-1];
		printw("\n");
		printw("------------------------------------------------------------------------");
		string name1, name2;
		int hp1, defensa1, ataque1;
		int hp2, defensa2, ataque2;

		name1 = peleador1 -> getNombre();
		name2 = peleador2 -> getNombre();
		defensa1 = peleador1 -> getDefensa();
		defensa2 = peleador2 -> getDefensa();
		ataque1 = peleador1 -> atacar();
		ataque2 = peleador2 -> atacar();
		hp1 = defensa1 * 20;
		hp2 = defensa2 * 20;


		while(hp1 > 0 && hp2 > 0)
		{
			printw("\n");
			printw(name1.c_str());
			printw("\n");
			printw("HP: ");
			printw(to_string(hp1).c_str());
			printw("\n");
			printw("\n");
			printw(name2.c_str());
			printw("\n");
			printw("HP: ");
			printw(to_string(hp2).c_str());
			printw("\n");
			printw("\n");
		}



	}







	//getch();
	endwin();
	return 0;
}

void Run::leerFighters(vector<string> names, vector<Fighter*> fighters)
{
	stringstream name;
	ifstream archivo;
	archivo.open("Fighters.txt");
	while (!archivo.eof())
	{
		string buffer;
		getline(archivo,buffer);

		string split[10];
		int str = 0;

		for(int i = 0; i < buffer.size();i++){
			if(buffer[i]!=',') {
				split[str].append(buffer,i,1);
			} else {
				str++;
				cout << str;
			}
		}

		for (int i = 0; i < str; i++) {
			names.push_back(split[i]);
		}
	}

	imprimirVector(names);

	for (int i = 0; i < names.size(); i++) {
		if (names[i] == "Mario")
		{
			Mario* player;
			ifstream archivo;
			archivo.open("Mario.txt");
			if(archivo.is_open())
			 {
				player = new Mario();
				archivo >> *player;
				fighters.push_back(player);
			 }
		}
		if (names[i] == "NathanDrake")
		{
			NathanDrake* player;
			ifstream archivo;
			archivo.open("NathanDrake.txt");
			if(archivo.is_open())
			 {
				player = new NathanDrake();
				archivo >> *player;
				fighters.push_back(player);
			 }
		}
		if (names[i] == "PowerRangerRojo")
		{
			PowerRangerRojo* player;
			ifstream archivo;
			archivo.open("PowerRangerRojo.txt");
			if(archivo.is_open())
			 {
				player = new PowerRangerRojo();
				archivo >> *player;
				fighters.push_back(player);
			 }
		}
		if (names[i] == "Spiderman")
		{
			Spiderman* player;
			ifstream archivo;
			archivo.open("Spiderman.txt");
			if(archivo.is_open())
			 {
				player = new Spiderman();
				archivo >> *player;
				fighters.push_back(player);
			 }
		}
	}



}

void Run::agregarFighter()
{
	// stringstream out;
	string name;
	char ans;
	/* out << "FIGHTER" << endl
	<< "1. Power Ranger" << endl
	<< "2. Nintendo Character" << endl
	<< "3. Playstation Character" << endl
	<< "4. Superhero" << endl;
	cout << out.str();
	cin >> ans; */

	printw("\n");
	start_color();
        init_pair(2, COLOR_WHITE, COLOR_BLUE);
        attron(COLOR_PAIR(2));
        printw("FIGHTER");
        attroff(COLOR_PAIR(2));

        printw("\n");
	start_color();
	init_pair(3, COLOR_RED, COLOR_WHITE);
	attron(COLOR_PAIR(3));
        printw("1. Power Ranger\n");
	attroff(COLOR_PAIR(3));

	start_color();
	init_pair(4, COLOR_WHITE, COLOR_RED);
	attron(COLOR_PAIR(4));
        printw("2. Nintendo Character\n");
	attroff(COLOR_PAIR(4));

	start_color();
	init_pair(5, COLOR_GREEN, COLOR_WHITE);
	attron(COLOR_PAIR(5));
        printw("3. PlayStation Character\n");
	attroff(COLOR_PAIR(5));

	start_color();
        init_pair(6, COLOR_YELLOW, COLOR_BLACK);
        attron(COLOR_PAIR(6));
        printw("4. Superhero\n");
        attroff(COLOR_PAIR(6));

	printw("Ingrese su opcion: ");
	ans = getch();

	if (ans == '1')
	{
		// stringstream out2;
		char ans2;
		
		/* out2 << "POWER RANGER" << endl
		<< "1. Red Power Ranger" << endl;
		cout << out2.str();
		cin >> ans2; */
		
		printw("\n");
		start_color();
        	init_pair(7, COLOR_RED, COLOR_WHITE);
        	attron(COLOR_PAIR(7));
        	printw("POWER RANGER\n");
        	attroff(COLOR_PAIR(7));
		printw("\n");
		printw("1. Power Ranger Rojo");
		printw("\n");
        	printw("Ingrese su opcion: ");
        	ans2 = getch();
		
		ofstream file("PowerRangerRojo.txt", ios::in | ios::out);
		file.open("PowerRangerRojo.txt");
		PowerRangerRojo* fighter = new PowerRangerRojo("PowerRangerRojo", 150, 55, true, "Dinozord");
		file << *fighter;
		file.close();

		name = "PowerRangerRojo";
	}
	if (ans == '2')
	{
		// stringstream out2;
		char ans2;
		
		/* out2 << "NINTENDO CHARACTER" << endl
		<< "1. Mario" << endl;
		cout << out2.str();
		cin >> ans2; */
		
		printw("\n");
                start_color();
                init_pair(8, COLOR_WHITE, COLOR_RED);
                attron(COLOR_PAIR(8));
                printw("NINTENDO CHARACTER\n");
                attroff(COLOR_PAIR(8));
                printw("\n");
                printw("1. Mario");
                printw("\n");
                printw("Ingrese su opcion: ");
                ans2 = getch();
		
		ofstream file("Mario.txt", ios::in | ios::out);
		file.open("Mario.txt");
		Mario* fighter = new Mario("Mario", 125, 75, true, "Mushroom");
		file << *fighter;
		file.close();

		name = "Mario";
	}
	if (ans == '3')
	{
		// stringstream out2;
		char ans2;
		
		/* out2 << "PLAYSTATION CHARACTER" << endl
		<< "1. Nathan Drake" << endl;
		cout << out2.str();
		cin >> ans2; */
		
		printw("\n");
                start_color();
                init_pair(9, COLOR_BLUE, COLOR_WHITE);
                attron(COLOR_PAIR(9));
                printw("PLAYSTATION CHARACTER\n");
                attroff(COLOR_PAIR(9));
                printw("\n");
                printw("1. Nathan Drake");
                printw("\n");
                printw("Ingrese su opcion: ");
                ans2 = getch();

		ofstream file("NathanDrake.txt", ios::in | ios::out);
		file.open("NathanDrake.txt");
		NathanDrake* fighter = new NathanDrake("NathanDrake", 140, 65, true, "Yemen");
		file << *fighter;
		file.close();

		name = "NathanDrake";
	}
	if (ans == '4')
	{
		// stringstream out2;
		char ans2;

		/* out2 << "SUPERHERO" << endl
		<< "1. Spiderman" << endl;
		cout << out2.str();
		cin >> ans2; */
		
		printw("\n");
                start_color();
                init_pair(10, COLOR_YELLOW, COLOR_BLACK);
                attron(COLOR_PAIR(10));
                printw("SUPERHERO\n");
                attroff(COLOR_PAIR(10));
                printw("\n");
                printw("1. Spiderman");
                printw("\n");
                printw("Ingrese su opcion: ");
                ans2 = getch();

		ofstream file("Spiderman.txt", ios::in | ios::out);
		file.open("Spiderman.txt");
		Spiderman* fighter = new Spiderman("Spiderman", 120, 85, false, "Marvel");
		file << *fighter;
		file.close();

		name = "Spiderman";
	}
	cout << "Agregado exitosamente" << endl;


	stringstream namef, info;
	string output, filename;

	namef << "Fighters.txt";
	filename = namef.str();
	info << name << ",";
	output = info.str();

	fstream outputFile(filename, ios::in | ios::out | ios_base::app);
	if (outputFile.is_open())
	{
		outputFile << output;
	}
	outputFile.close();

}

void Run::imprimirVector(vector<string> vector1)
{
	stringstream out;
	//recorre el vector para imprimir cada uno
        for (int j = 0; j < vector1.size(); j++) {
                out << j+1 << ") " << vector1.at(j) << "\n";
        }
	printw(out.str().c_str());
}

void Run::imprimirFighter(vector<Fighter*> vector1)
{
	stringstream out;
	//recorre el vector para imprimir cada uno
        for (int j = 0; j < vector1.size(); j++) {
                out << j+1 << ") " << vector1.at(j) -> getNombre() << "\n";
        }
	printw(out.str().c_str());

}
