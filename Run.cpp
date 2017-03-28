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

	int count = 0;

	while(true) {
		start_color();
		int x, y;
		getmaxyx(stdscr,y,x);
		init_color(COLOR_BLUE,0,151,167);
		init_pair(1, COLOR_WHITE, COLOR_BLUE);
		attron(COLOR_PAIR(1));
		attron(A_BOLD);
		//printw("\n");
		//mvprintw(0,x/2-13,"BATTLE ROYALE");
		printw("\t\t\t\tBATTLE ROYALE                                   ");
		attroff(A_BOLD);
		attroff(COLOR_PAIR(1));
		init_pair(11, COLOR_BLUE, COLOR_WHITE);
		attron(COLOR_PAIR(11));
		attron(A_BOLD);
		//printw("\n");
		printw("\t\t1. Agregar Fighter                                             \n");
	  	printw("\t\t2. Listar Fighters                                             \n");
	  	printw("\t\t3. Realizar Simulacion                                         \n");
		printw("\t\t4. Salir                                                       \n");
		printw("Ingrese su opcion:                                                             \n");
		opc = getch();
		attroff(A_BOLD);
		attroff(COLOR_PAIR(11));
		//opc = getch();

		vector <int> values;


		if (count == 0)
		{
			count++;
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
					values.push_back(player -> getAtaque());
					values.push_back(player -> getDefensa());

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
					values.push_back(player -> getAtaque());
					values.push_back(player -> getDefensa());
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
					values.push_back(player -> getAtaque());
					values.push_back(player -> getDefensa());
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
					 values.push_back(player -> getAtaque());
					 values.push_back(player -> getDefensa());
				}
			}
		}
		if (opc == '1')
		{
			agregarFighter();
			printw("\n");
		}
		else if (opc == '2')
		{
			//imprimirVector(names);
			printw("\n");
			imprimirFighter(fighters);
			printw("\n");
			getch();
		}
		else if (opc == '3')
		{
			refresh();
			char opc1, opc2;
			//Fighter* peleador1;
			//Fighter* peleador2;
			printw("\n");
			printw("\n");
			attron(A_BOLD);
			printw("ELEGIR EL PRIMER PELEADOR\n");
			attroff(A_BOLD);
			imprimirFighter(fighters);
			opc1 = getch();
			printw("\n");
			printw("\n");
			attron(A_BOLD);
			printw("ELEGIR EL SEGUNDO PELEADOR\n");
			attroff(A_BOLD);
			imprimirFighter(fighters);
			opc2 = getch();

			int fight1 = (int)opc1;
			int fight2 = (int)opc2;

			string name1, name2;
			int hp1, defensa1, ataque1;
			int hp2, defensa2, ataque2;

			//peleador1 = fighters[0];
			//peleador2 = fighters[1];
			int num1 = 0;
			int num2 = 1;
			if (names[num1] == "Mario")
			{
				//Mario* peleador1 = static_cast<Mario*>(fighters[fight1-1]);
				Mario* peleador1 = static_cast<Mario*>(fighters[1]);
				name1 = peleador1 -> getNombre();
				defensa1 = peleador1 -> getDefensa();
				ataque1 = peleador1 -> atacar();

				defensa1 = values[2];
				ataque1 = values[3];
				ataque1 = 125;
				hp1 = defensa1 * 20;

			}
			else if (names[num1] == "NathanDrake")
			{
				//NathanDrake* peleador1 = static_cast<NathanDrake*>(fighters[fight1-1]);
				NathanDrake* peleador1 = static_cast<NathanDrake*>(fighters[2]);
				name1 = peleador1 -> getNombre();
				defensa1 = peleador1 -> getDefensa();
				ataque1 = peleador1 -> atacar();

				defensa1 = values[4];
				ataque1 = values[5];
				ataque1 = 145;
				hp1 = defensa1 * 20;
			}
			else if (names[num1] == "PowerRangerRojo")
			{
				//PowerRangerRojo* peleador1 = static_cast<PowerRangerRojo*>(fighters[fight1-1]);
				PowerRangerRojo* peleador1 = static_cast<PowerRangerRojo*>(fighters[0]);
				name1 = peleador1 -> getNombre();
				defensa1 = peleador1 -> getDefensa();
				ataque1 = peleador1 -> atacar();

				defensa1 = values[0];
				ataque1 = values[1];
				ataque1 = 155;
				hp1 = defensa1 * 20;
			}
			else //if (names[fight1-1] == "Spiderman")
			{
				//Spiderman* peleador1 = static_cast<Spiderman*>(fighters[fight1-1]);
				Spiderman* peleador1 = static_cast<Spiderman*>(fighters[3]);
				name1 = peleador1 -> getNombre();
				defensa1 = peleador1 -> getDefensa();
				ataque1 = peleador1 -> atacar();

				defensa1 = values[0];
				ataque1 = values[1];
				ataque1 = 175;
				hp1 = defensa1 * 20;
			}

			if (names[num2] == "Mario")
			{
				//Mario* peleador2 = static_cast<Mario*>(fighters[fight2-1]);
				Mario* peleador2 = static_cast<Mario*>(fighters[1]);
				name2 = peleador2 -> getNombre();
				defensa2 = peleador2 -> getDefensa();
				ataque2 = peleador2 -> atacar();

				defensa2 = values[2];
				ataque2 = values[3];
				ataque2 = 125;
				hp2 = defensa2 * 20;

			}
			else if (names[num2] == "NathanDrake")
			{
				//NathanDrake* peleador2 = static_cast<NathanDrake*>(fighters[fight2-1]);
				NathanDrake* peleador2 = static_cast<NathanDrake*>(fighters[2]);
				name2 = peleador2 -> getNombre();
				defensa2 = peleador2 -> getDefensa();
				ataque2 = peleador2 -> atacar();

				defensa2 = values[4];
				ataque2 = values[5];
				ataque2 = 145;
				hp2 = defensa2 * 20;
			}
			else if (names[num2] == "PowerRangerRojo")
			{
				//PowerRangerRojo* peleador2 = static_cast<PowerRangerRojo*>(fighters[fight2-1]);
				PowerRangerRojo* peleador2 = static_cast<PowerRangerRojo*>(fighters[0]);
				name2 = peleador2 -> getNombre();
				defensa2 = peleador2 -> getDefensa();
				ataque2 = peleador2 -> atacar();

				defensa2 = values[0];
				ataque2 = values[1];
				ataque2 = 175;
				hp2 = defensa2 * 20;
			}
			else //if (names[fight2-1] == "Spiderman")
			{
				//Spiderman* peleador2 = static_cast<Spiderman*>(fighters[fight2-1]);
				Spiderman* peleador2 = static_cast<Spiderman*>(fighters[3]);
				name2 = peleador2 -> getNombre();
				defensa2 = peleador2 -> getDefensa();
				ataque2 = peleador2 -> atacar();

				defensa2 = values[0];
				ataque2 = values[1];
				ataque2 = 145;
				hp2 = defensa2 * 20;
			}

			printw("\n");
			printw("------------------------------------------------------------------------");

			int cont = 0;
			while(hp1 > 0 && hp2 > 0)
			{

				printw("\n");
				attron(A_BOLD);
				printw(name1.c_str());
				attroff(A_BOLD);
				printw("\n");
				printw("HP: ");
				printw(to_string(hp1).c_str());
				printw("\n");
				printw("\n");
				attron(A_BOLD);
				printw(name2.c_str());
				attroff(A_BOLD);
				printw("\n");
				printw("HP: ");
				printw(to_string(hp2).c_str());
				printw("\n");
				printw("\n");

				getch();

				printw(name2.c_str());
				printw(" ataca\nSe reduce la vida del peleador 1 por ");
				printw(to_string(ataque2).c_str());
				printw("\n");
				hp1 -= ataque2;

				getch();

				printw("\n");
				printw(name1.c_str());
				printw(" ataca\nSe reduce la vida del peleador 2 por ");
				printw(to_string(ataque1).c_str());
				printw("\n");
				hp2 -= ataque1;

				getch();
				clear();
				cont++;

			}
			printw("\n");
			printw("JUEGO TERMINADO");
			printw("\n");
			printw("\n");

			if (hp1 <= 0)
			{
				printw("Ha ganado ");
				printw(name2.c_str());
				printw(" la partida");
			}
			else {
				 printw("Ha ganado ");
				 printw(name1.c_str());
				 printw(" la partida");
			}


			getch();
			printw("\n");



		}
		else {
			printw("\n");
			return 0;
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
	attron(A_BOLD);
        printw("\t\t\t\tFIGHTER                                        ");

        attroff(COLOR_PAIR(2));

        printw("\n");
	start_color();
	init_pair(3, COLOR_WHITE, COLOR_MAGENTA);
	attron(COLOR_PAIR(3));
        printw("\t\t1. Power Ranger                                                \n");
	attroff(COLOR_PAIR(3));

	start_color();
	init_pair(4, COLOR_WHITE, COLOR_RED);
	attron(COLOR_PAIR(4));
        printw("\t\t2. Nintendo Character                                          \n");
	attroff(COLOR_PAIR(4));

	start_color();
	init_pair(5, COLOR_WHITE, COLOR_GREEN);
	attron(COLOR_PAIR(5));
        printw("\t\t3. PlayStation Character                                       \n");
	attroff(COLOR_PAIR(5));

	start_color();
        init_pair(6, COLOR_BLACK, COLOR_CYAN);
        attron(COLOR_PAIR(6));
        printw("\t\t4. Superhero                                                   \n");
        attroff(COLOR_PAIR(6));
	attroff(A_BOLD);

	attron(COLOR_PAIR(11));
	attron(A_BOLD);
	printw("Ingrese su opcion: ");
	attron(COLOR_PAIR(11));
	attroff(A_BOLD);
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
        	attron(COLOR_PAIR(3));
        	printw("POWER RANGER\n");

		//printw("\n");
		printw("1. Power Ranger Rojo");
		printw("\n");
        	printw("Ingrese su opcion: ");
        	ans2 = getch();
		attroff(COLOR_PAIR(3));

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

                //printw("\n");
                printw("1. Mario");
                printw("\n");
                printw("Ingrese su opcion: ");
                ans2 = getch();
		attroff(COLOR_PAIR(8));

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

                //printw("\n");
                printw("1. Nathan Drake");
                printw("\n");
                printw("Ingrese su opcion: ");
                ans2 = getch();
		attroff(COLOR_PAIR(9));

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

                //printw("\n");
                printw("1. Spiderman");
                printw("\n");
                printw("Ingrese su opcion: ");
                ans2 = getch();
		attroff(COLOR_PAIR(10));

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
