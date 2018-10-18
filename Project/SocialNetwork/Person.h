#pragma once
#include<iostream>
#include<string>
using namespace std;
class Person
{
public:

	Person();
	~Person();
	void setId(int);
	int getId();
	string getName();
	friend istream & operator>>(istream&, Person&);
	friend ostream & operator<<(ostream&, Person&);
private:
	string name;
	int id;
};

