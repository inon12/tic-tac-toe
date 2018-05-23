
all:Board.o cell.o IllegalCharException.o IllegalCoordinateException.o


Board.o:Board.cpp Board.h
	clang++-5.0 -std=c++17 -c Board.cpp
cell.o: cell.cpp cell.h
	clang++-5.0 -std=c++17 -c cell.cpp
IllegalCharException.o:IllegalCharException.cpp IllegalCharException.h
	clang++-5.0 -std=c++17 -c IllegalCharException.cpp
IllegalCoordinateException.o:IllegalCoordinateException.cpp IllegalCoordinateException.h
	clang++-5.0 -std=c++17 -c IllegalCoordinateException.cpp

clean:
	rm *.o
