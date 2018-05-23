#include <iostream>
#include "cell.hpp"
#include "IllegalCharException.hpp"
#include "Coordinate.hpp"
#include <iostream>
#include <vector>
#include "IllegalCoordinateException.hpp"
class Board{
	
	public:
		cell** matrix;
		int size;
		Board(int s);
		Board(const Board& other);
		friend ostream& operator<<(ostream& os,const Board& board);
		Board& operator=(const char x);
		Board& operator=(const Board& B);
		cell& operator[](Coordinate cord);
		
};

