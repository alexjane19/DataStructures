#pragma once
#include<iostream>
#include<string>
using namespace std;
class Location
{
public:
	Location();
	~Location();
	void setNum(int);
	int getNum();
	friend istream & operator>>(istream&, Location&);
	friend ostream & operator<<(ostream&, Location&);
private:
	string name;
	int num;
};

