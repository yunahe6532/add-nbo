#Makefile
all: add-nbo

add-nbo: add-nbo.cpp
	g++ -o add-nbo add-nbo.cpp

clean:
	rm -f add-nbo
	rm -f *.o
