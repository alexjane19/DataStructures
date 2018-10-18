#include<iostream>
#include<string>
#include "Communication.h"
using namespace std;

int main()
{
	 Communication com;
	 com.getPerson();
	 com.getCommunicationPersons();
	 com.floydWarshall();
	 com.communicationBothPerson();

	cout << endl;
	system("pause");
	return 0;
}