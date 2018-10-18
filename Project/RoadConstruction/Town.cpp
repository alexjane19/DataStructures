#include "Town.h"


Town::Town()
{
}


Town::~Town()
{
}

void Town::setNum(int num)
{
	this->num = num;
}
int Town::getNum()
{
	return this->num;
}

istream &operator>>(istream &is, Town &tn)
{
	is >> tn.name;
	return is;
}

ostream & operator<<(ostream& os, Town& tn)
{
	os << tn.name;
	return os;

}