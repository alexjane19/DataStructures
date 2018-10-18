#include "Halltown.h"


Halltown::Halltown()
{
}


Halltown::~Halltown()
{
}

void Halltown::getLocation()
{
	buildLocation();
	for (int i = 0; i < numofplace; i++)
	{
		cout << "\nEnter Name's " << i << " Place: ";
		cin >> location[i];
		location[i].setNum(i);
	}

}

void Halltown::buildLocation()
{
	cout << "\nEnter Number of places: ";
	cin >> numofplace;
	location = new Location[numofplace];
}

void Halltown::createMatrix()
{
	distancep = new int*[numofplace];
	for (int i = 0; i < numofplace; i++)
	{
		distancep[i] = new int[numofplace];
	}
}


void Halltown::floydWarshall() {

	for (int k = 0; k < numofplace; k++) {

		for (int i = 0; i < numofplace; i++) {

			for (int j = 0; j < numofplace; j++) {

				if (distancep[i][j] > distancep[i][k] + distancep[k][j]) {

					distancep[i][j] = distancep[i][k] + distancep[k][j];

				}



			}

		}

	}
	cout << endl;
	for (int i = 0; i < numofplace; i++) {

		for (int j = 0; j < numofplace; j++) {
			cout << distancep[i][j] << "\t";
		}
		cout << endl;
	}
}

void Halltown::findBestPlace()
{
	int mindis=999999;
	int bestplace;
	int temp=0;
	for (int i = 0; i < numofplace; i++){
		for (int j = 0; j < numofplace; j++)
		{
			temp += distancep[i][j];
		}
		if (temp<mindis)
		{
			mindis = temp;
			bestplace = i;
		}
	}
	cout << "Best Place is " << location[bestplace];
}
void Halltown::getDistanceLocation()
{
	createMatrix();
	fstream fs;
	fs.open("locationinfo.txt", fstream::in);
	int g = 0;
	string linef;
	while (!fs.eof())
	{
		getline(fs, linef);
		for (int i = 0, j = 0; i < linef.size(); i++)
		{
			if (linef[i] != ' ')
			{
				distancep[g][j] = linef[i] - '0';
				j++;
			}
		}
		g++;
	}
}