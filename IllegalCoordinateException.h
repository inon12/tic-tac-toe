#include <iostream>
#include <exception>
#include <string>
#include "Coordinate.h"
using namespace std;
class IllegalCoordinateException:public exception{
	public:
		// testcommit123
		Coordinate coord;
		IllegalCoordinateException(Coordinate x);
		string theCoordinate()const ;
};

