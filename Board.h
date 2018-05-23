#include <iostream>
#include "cell.h"
#include "IllegalCharException.h"
#include "Coordinate.h"
#include <iostream>
#include <vector>
#include "IllegalCoordinateException.h"
class Board{
	
	public:
		cell** matrix;
		int size;
		Board(int s);
		Board(const Board& other);
		//bool operator==(const Board& second)const;
		friend ostream& operator<<(ostream& os,const Board& board);
		Board& operator=(const char x);
		Board& operator=(const Board& B);
		cell& operator[](Coordinate cord);
		
};

