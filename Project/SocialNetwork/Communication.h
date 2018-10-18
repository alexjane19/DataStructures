#pragma once
#include "Person.h"
#include<fstream>
class Communication
{
public:
	Communication();
	~Communication();
	void getPerson();
	void floydWarshall();
	void getCommunicationPersons();
	void communicationBothPerson();
private:
	void getCommunication(int i, int j);
	void constructInitialMatixOfPredecessors();
	void buildPerson();
	void createMatrix();
	int const Max_Value = 99;
	int **communicate;
	int **relperson;
	Person *person;
	int numofperson;
};

