Main:	Main.o Fighter.o PowerRanger.o Superhero.o NintendoChar.o PSChar.o PowerRangerRojo.o Spiderman.o Mario.o NathanDrake.o
	g++ Main.o Fighter.o PowerRanger.o Superhero.o NintendoChar.o PSChar.o PowerRangerRojo.o Spiderman.o Mario.o NathanDrake.o -o Main

Main.o:	Main.cpp Fighter.h PowerRanger.h Superhero.h NintendoChar.h PSChar.h PowerRangerRojo.h Spiderman.h Mario.h NathanDrake.h
	g++ -c Main.cpp

Fighter.o:	PowerRanger.h Superhero.h NintendoChar.h PSChar.h PowerRangerRojo.h Spiderman.h Mario.h NathanDrake.h Fighter.h Fighter.cpp
	g++ -c Fighter.cpp

PowerRanger.o: PowerRanger.cpp PowerRanger.h PowerRangerRojo.h
	g++ -c PowerRanger.cpp

NintendoChar.o: NintendoChar.cpp NintendoChar.h Mario.h
	g++ -c NintendoChar.cpp

Superhero.o: Superhero.cpp Superhero.h Spiderman.h
	g++ -c Superhero.cpp

PSChar.o: PSChar.cpp PSChar.h NathanDrake.h
	g++ -c PSChar.cpp

PowerRangerRojo.o:	PowerRangerRojo.cpp PowerRangerRojo.h
	g++ -c PowerRangerRojo.cpp

Mario.o:	Mario.cpp Mario.h
	g++ -c Mario.cpp

Spiderman.o:	Spiderman.cpp Spiderman.h
	g++ -c Spiderman.cpp

NathanDrake.o:	NathanDrake.cpp NathanDrake.h
	g++ -c NathanDrake.cpp


clean:
	rm -f *.o Main
