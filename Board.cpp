#include "Board.hpp"
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
ostream& operator<<(ostream& os,const Board& board){
	for(int i=0;i<board.size;i++){
		for(int j=0;j<board.size;j++){
			cout<<board.matrix[i][j];
		}
		cout<<endl;
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
Board& Board::operator=(const Board& B){
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
