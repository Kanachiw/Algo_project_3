
main:  main.o wordFinder.h wordFinder.h d_matrix.h sort_algorithms.h
	g++ main.o -o main 


main.o: main.cpp wordFinder.h wordFinder.h d_matrix.h sort_algorithms.h
	g++ -c main.cpp


clean:
	rm *.o main 
