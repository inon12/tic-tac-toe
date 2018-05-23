#include <iostream>
#include "cell.h"
#include "IllegalCharException.h"
cell::cell(){
	a='.';
}
cell::cell(char x){
	a=x;
}
cell& cell::operator=(const cell& Cell){
	this->a=Cell.a;
	return *this;
}
cell& cell::operator=(const char y){
	if(y!='X'&&y!='O'&&y!='.')
		throw IllegalCharException(y);
	a=y;
	return *this;
}
ostream& operator<<(ostream& os,const cell& Cell){
	cout<<Cell.a;
	return os;
}
cell::operator char(){
	return a;
}
bool cell::operator==(const char& Cell)const{
	if(this->a==Cell)
		return true;
	return false;
}
