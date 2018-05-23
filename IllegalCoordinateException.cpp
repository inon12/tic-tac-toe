#include <string>
#include <iostream>
#include "IllegalCoordinateException.hpp"
using namespace std;
IllegalCoordinateException::IllegalCoordinateException(Coordinate C){
	coord.x=C.x;
	coord.y=C.y;
}
string IllegalCoordinateException::theCoordinate()const{
	string ex=to_string(coord.x) + "," +to_string(coord.y);
	return ex;
}
