#include "HallTown.h"
using namespace std;

int main()
{
	Halltown ht;
	ht.getLocation();
	ht.getDistanceLocation();
	ht.floydWarshall();
	ht.findBestPlace();

	cout << endl;
	system("pause");
	return 0;
}