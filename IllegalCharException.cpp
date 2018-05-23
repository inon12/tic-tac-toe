#include <iostream>
#include "IllegalCharException.h"


IllegalCharException::IllegalCharException(const char x){this->Char=x;}

const char IllegalCharException::theChar()const{return Char;}
