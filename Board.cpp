#include "Board.h"
#include <iostream>
#include <stdio.h>
using namespace std;
Board::Board(int s): size(s){
	matrix=new cell*[size];
		for(int i=0;i<size;i++)
		{
			matrix[i]=new cell[size];
			for(int j=0;j<size;j++)
				matrix[i][j]='.';
		}
}
Board::Board(const Board& other){
	size=other.size;
	matrix=new cell*[other.size];
		for(int i=0;i<size;i++)
		{
			matrix[i]=new cell[size];
			for(int j=0;j<size;j++)
				matrix[i][j]=other.matrix[i][j];
		}
}
Board::~Board(){
	for(int i=0;i<size;i++){
		delete[] matrix[i];
	}
	delete[] matrix;
}
			
ostream& operator<<(ostream& os,Board const& board){
	for(int i=0;i<board.size;i++){
		for(int j=0;j<board.size;j++){
			os<<board.matrix[i][j];
		}
		os<<"\n";
	}
	return os;
}
Board& Board::operator=(const char x){
	if(x!='X'&&x!='O'&&x!='.')
		throw IllegalCharException(x);
	else{
		for(int i=0;i<this->size;i++)
			for(int j=0;j<this->size;j++)
				this->matrix[i][j]=x;
		return *this;
		}
}
/*bool Board::operator==(const Board& second)const{
	if(this->size!=second.size)
		return false;
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			if(matrix[i][j]!=second.matrix[i][j])
				return false;
		}
	}
	return true;
}*/
Board& Board::operator=(const Board& B){
	this->~Board();
	size=B.size;
	for(int i=0;i<size;i++)
		for(int j=0;j<size;j++)
			this->matrix[i][j]=B.matrix[i][j];
	return *this;
}
cell& Board:: operator[](Coordinate cord)
{
	if(cord.x>size-1||cord.x<0||cord.y>size-1||cord.y<0){
		throw IllegalCoordinateException(cord);
	}
	else
		return this->matrix[cord.x][cord.y];
}
