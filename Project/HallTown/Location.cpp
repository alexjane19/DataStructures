#include "Location.h"


Location::Location()
{
}


Location::~Location()
{
}


void Location::setNum(int num)
{
	this->num = num;
}
int Location::getNum()
{
	return this->num;
}

istream &operator>>(istream &is, Location &tn)
{
	is >> tn.name;
	return is;
}

ostream & operator<<(ostream& os, Location& tn)
{
	os << tn.name;
	return os;
}