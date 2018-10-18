#include "HallTown.h"


HallTown::HallTown()
{
}


HallTown::~HallTown()
{
}
void HallTown::getTowns()
{
	buildTowns();
	for (int i = 0; i < numoftown; i++)
	{
		cout << "\nEnter Name's " << i << " Town: ";
		cin >> town[i];
		town[i].setNum(i);
	}

}

void HallTown::buildTowns()
{
	cout << "\nEnter Number of Towns: ";
	cin >> numoftown;
	town = new Town[numoftown];
}

void HallTown::createMatrix()
{
	path = new int*[numoftown];
	minlen = new int*[numoftown];
	for (int i = 0; i < numoftown; i++)
	{
		path[i]= new int[numoftown];
		minlen[i] = new int[numoftown];
	}
}
void HallTown::constructInitialMatixOfPredecessors() {

	for (int i = 0; i < numoftown; i++) 
	{

		for (int j = 0; j < numoftown; j++) 
		{

			if (minlen[i][j] != 0 && minlen[i][j] != Max_Value)
			{

				path[i][j] = i;

			}
			else 
			{

				path[i][j] = -1;

			}

		}

	}

	//cout << "\n";
	//for (int i = 0; i < lengthx; i++) {

	//	for (int j = 0; j < lengthx; j++) {
	//		cout << p[i][j] << "\t";
	//	}
	//	cout << endl;
	//}


}

void HallTown::floydWarshall() {

	constructInitialMatixOfPredecessors();
	for (int k = 0; k < numoftown; k++) {

		for (int i = 0; i < numoftown; i++) {

			for (int j = 0; j < numoftown; j++) {

				if (minlen[i][k] == Max_Value || minlen[k][j] == Max_Value) {

					continue;

				}



				if (minlen[i][j] > minlen[i][k] + minlen[k][j]) {

					minlen[i][j] = minlen[i][k] + minlen[k][j];

					path[i][j] = k;

				}



			}

		}

	}
	cout << endl;
	for (int i = 0; i < numoftown; i++) {

		for (int j = 0; j < numoftown; j++) {
			cout << minlen[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < numoftown; i++) {

		for (int j = 0; j < numoftown; j++) {
			cout << path[i][j] << "\t";
		}
		cout << endl;
	}
}

void HallTown::asphaltPaths()
{
	cout << "Paths that must be pave: \n";
	for (int i = 0; i < numoftown;i++)
	for (int j = 0; j < numoftown; j++)
	{
		if (path[i][j] == i)
		{
			cout << town[i] << "---->" << town[j]<<endl;
		}
	}
}
void HallTown::getDistanceTowns()
{
	createMatrix();
	fstream fs;
	fs.open("townsinfo.txt", fstream::in);
	int g = 0;
	string linef;
	while (!fs.eof())
	{
		getline(fs, linef);
		for (int i = 0,j=0; i < linef.size(); i++)
		{
			if (linef[i] == '&')
			{
				minlen[g][j] = Max_Value;
				j++;
				continue;
			}
			if (linef[i] != ' ')
			{
				minlen[g][j] = linef[i] - '0';
				j++;
			}
		}
		g++;
	}
}