#pragma once
#include "Location.h"
#include<fstream>
class Halltown
{
public:
	Halltown();
	~Halltown();
	void getLocation();
	void floydWarshall();
	void getDistanceLocation();
	void findBestPlace();
private:
	void buildLocation();
	void createMatrix();
	int **distancep;
	Location *location;
	int numofplace;
};

