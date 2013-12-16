
Prog: main.o
	g++ -o run main.o

main.o: main.cpp
	g++ -c main.cpp -I ./

clean:
	rm main.o
	rm run
