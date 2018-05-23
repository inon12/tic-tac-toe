#include <iostream>
#include "cell.hpp"
#include "IllegalCharException.hpp"
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
