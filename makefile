
main: main.o wordFinder.h wordFinder.h
	g++ main.o -o main 


main.o: main.cpp wordFinder.h wordFinder.h 
	g++ -c main.cpp


clean:
	rm *.o main 
