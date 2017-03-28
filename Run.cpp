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
		imprimirVector(names);
		imprimirFighter(fighters);
	}
	else if (opc == '3')
	{
		imprimirFighter(fighters);
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
	stringstream out;
	string name;
	char ans;
	out << "FIGHTER" << endl
	<< "1. Power Ranger" << endl
	<< "2. Nintendo Character" << endl
	<< "3. Playstation Character" << endl
	<< "4. Superhero" << endl;
	cout << out.str();
	cin >> ans;

	if (ans == '1')
	{
		stringstream out2;
		char ans2;

		out2 << "POWER RANGER" << endl
		<< "1. Red Power Ranger" << endl;
		cout << out2.str();
		cin >> ans2;

		ofstream file("PowerRangerRojo.txt", ios::in | ios::out);
		file.open("PowerRangerRojo.txt");
		PowerRangerRojo* fighter = new PowerRangerRojo("PowerRangerRojo", 150, 55, true, "Dinozord");
		file << *fighter;
		file.close();

		name = "PowerRangerRojo";
	}
	if (ans == '2')
	{
		stringstream out2;
		char ans2;

		out2 << "NINTENDO CHARACTER" << endl
		<< "1. Mario" << endl;
		cout << out2.str();
		cin >> ans2;

		ofstream file("Mario.txt", ios::in | ios::out);
		file.open("Mario.txt");
		Mario* fighter = new Mario("Mario", 125, 75, true, "Mushroom");
		file << *fighter;
		file.close();

		name = "Mario";
	}
	if (ans == '3')
	{
		stringstream out2;
		char ans2;

		out2 << "PLAYSTATION CHARACTER" << endl
		<< "1. Nathan Drake" << endl;
		cout << out2.str();
		cin >> ans2;

		ofstream file("NathanDrake.txt", ios::in | ios::out);
		file.open("NathanDrake.txt");
		NathanDrake* fighter = new NathanDrake("NathanDrake", 140, 65, true, "Yemen");
		file << *fighter;
		file.close();

		name = "NathanDrake";
	}
	if (ans == '4')
	{
		stringstream out2;
		char ans2;

		out2 << "SUPERHERO" << endl
		<< "1. Spiderman" << endl;
		cout << out2.str();
		cin >> ans2;

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
	getch();
}

void Run::imprimirFighter(vector<Fighter*> vector1)
{
	stringstream out;
	//recorre el vector para imprimir cada uno
        for (int j = 0; j < vector1.size(); j++) {
                out << j+1 << ") " << vector1.at(j) -> getNombre() << "\n";
        }
	printw(out.str().c_str());
	getch();
}
