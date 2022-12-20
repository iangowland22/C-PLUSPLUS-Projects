output: main.o ArrayList.o
	g++ main.o ArrayList.o -o main

main.o: main.cpp
	g++ -c main.cpp

ArrayList.o: ArrayList.cpp
	g++ -c ArrayList.cpp

clean:
	rm *.o output;


