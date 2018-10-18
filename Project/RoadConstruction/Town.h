#pragma once
#include<iostream>
#include<string>
using namespace std;
class Town
{
public:
	void setNum(int);
	int getNum();
	Town();
	~Town();
	friend istream & operator>>(istream& , Town&);
	friend ostream & operator<<(ostream&, Town&);
private:
	string name;
	int num;
};

