#include <iostream>
using namespace std;

class cell{
	public:
		char a;
		cell();
		cell(char x);
		cell& operator=(const cell& Cell);
		cell& operator=(const char a);
		friend ostream& operator<<(ostream& os,const cell& Cell);
		operator char();
		bool operator==(const char& Cell)const;
};

