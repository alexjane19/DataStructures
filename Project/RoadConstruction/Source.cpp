#include<iostream>
#include<string>
#include "HallTown.h"
using namespace std;

int main()
{
	HallTown ht;
	ht.getTowns();
	ht.getDistanceTowns();
	ht.floydWarshall();
	ht.asphaltPaths();
	
	cout << endl;
	system("pause");
	return 0;
}