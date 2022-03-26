#include <iostream>
#include <exception>
#include <string>
#include "Coordinate.h"
using namespace std;
class IllegalCoordinateException:public exception{
	public:
		// testcommit
		Coordinate coord;
		IllegalCoordinateException(Coordinate x);
		string theCoordinate()const ;
};

