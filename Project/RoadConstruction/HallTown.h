#include<iostream>
#include <fstream>
#include "Town.h"
using namespace std;
class HallTown
{
private:
	int numoftown;
	Town *town;
	int const Max_Value = 99;
	int **minlen;
	int **path;

public:

 HallTown();


	~HallTown();
	void getTowns();
	void buildTowns();

	void createMatrix();
	void constructInitialMatixOfPredecessors();

	void floydWarshall();
	void asphaltPaths();
	void getDistanceTowns();
};