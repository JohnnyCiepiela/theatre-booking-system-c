
execute: main.o Event.o 
	g++ main.o Event.o -o execute

main.o: main.cpp Event.h 
	g++ -c main.cpp Event.h 

Event.o: Event.cpp Event.h StandUp.h Music.h Film.h
	g++ -c Event.cpp Event.h StandUp.h Music.h Film.h

clean:
	rm *.o execute
