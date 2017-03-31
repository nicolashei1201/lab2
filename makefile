math: math.o lab2.o
	g++ -o math lab2.o math.o
math.o: math.cpp math.h
	g++ -c math.cpp
lab2.o: lab2.cpp math.h
	g++ -c lab2.cpp

clean:
	rm math *.o

