#include "Person.h"


Person::Person()
{
}


Person::~Person()
{
}
void Person::setId(int id)
{
	this->id = id;
}
int Person::getId()
{
	return this->id;
}
string Person::getName()
{
	return this->name;
}
istream &operator>>(istream &is, Person &tn)
{
	is >> tn.name;
	return is;
}

ostream & operator<<(ostream& os, Person& tn)
{
	os << tn.name;
	return os;

}