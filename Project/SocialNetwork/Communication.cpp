#include "Communication.h"


Communication::Communication()
{
}


Communication::~Communication()
{
}
void Communication::getPerson()
{
	buildPerson();
	for (int i = 0; i < numofperson; i++)
	{
		cout << "\nEnter Name's " << i << " Town: ";
		cin >> person[i];
		person[i].setId(i);
	}

}

void Communication::buildPerson()
{
	cout << "\nEnter Number of Towns: ";
	cin >> numofperson;
	person = new Person[numofperson];
}

void Communication::createMatrix()
{
	communicate = new int*[numofperson];
	relperson = new int*[numofperson];
	for (int i = 0; i < numofperson; i++)
	{
		communicate[i] = new int[numofperson];
		relperson[i] = new int[numofperson];
	}
}
void Communication::constructInitialMatixOfPredecessors() {

	for (int i = 0; i < numofperson; i++)
	{

		for (int j = 0; j < numofperson; j++)
		{

			if (relperson[i][j] != 0 && relperson[i][j] != Max_Value)
			{

				communicate[i][j] = i;

			}
			else
			{

				communicate[i][j] = -1;

			}

		}

	}

}

void Communication::floydWarshall() {

	constructInitialMatixOfPredecessors();
	for (int k = 0; k < numofperson; k++) {

		for (int i = 0; i < numofperson; i++) {

			for (int j = 0; j < numofperson; j++) {

				if (relperson[i][k] == Max_Value || relperson[k][j] == Max_Value) {

					continue;

				}



				if (relperson[i][j] > relperson[i][k] + relperson[k][j]) {

					relperson[i][j] = relperson[i][k] + relperson[k][j];

					communicate[i][j] = k;

				}



			}

		}

	}
	cout << endl;
	for (int i = 0; i < numofperson; i++) {

		for (int j = 0; j < numofperson; j++) {
			cout << relperson[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < numofperson; i++) {

		for (int j = 0; j < numofperson; j++) {
			cout << communicate[i][j] << "\t";
		}
		cout << endl;
	}
}

void Communication::getCommunication(int i, int j){

	if (i == j)
		cout << " ";

	else if (communicate[i][j] == -1)
		cout << "\nCommunication does not exist";

	else
		getCommunication(i, communicate[i][j]);
	cout << " --> " << person[j].getName();
}

void Communication::communicationBothPerson()
{
	string iname, jname;
	int iperson, jperson;
	cout << "Enter first person: ";
	cin >> iname;
	cout << "Enter second person: ";
	cin >> jname;
	for (int i = 0; i < numofperson; i++)
	{
		if (person[i].getName() == iname)
			iperson = i;

		if (person[i].getName() == jname)
			jperson = i;
	}
	cout << iname<< ": ";
	getCommunication(iperson, jperson);
}
void Communication::getCommunicationPersons()
{
	createMatrix();
	fstream fs;
	fs.open("personsinfo.txt", fstream::in);
	int g = 0;
	string linef;
	while (!fs.eof())
	{
		getline(fs, linef);
		for (int i = 0, j = 0; i < linef.size(); i++)
		{
			if (linef[i] == '&')
			{
				relperson[g][j] = Max_Value;
				j++;
				continue;
			}
			if (linef[i] != ' ')
			{
				relperson[g][j] = linef[i] - '0';
				j++;
			}
		}
		g++;
	}
}