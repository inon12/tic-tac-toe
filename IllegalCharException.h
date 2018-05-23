//h file
#pragma once
#include <iostream>
#include <exception>


using namespace std;

class IllegalCharException:public exception{
private:
	char Char;
public:
IllegalCharException(char x);
const char theChar()const;
};
