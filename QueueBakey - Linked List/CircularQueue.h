#pragma once
#include "Linklist.h"
class CircularQueue
{
public:
	CircularQueue();
	~CircularQueue();
	int delQueue();
	bool addQueue(int);
	bool isEmpty();
	int peopleInLine();
	bool turns;
private:
	int num;
	List peopleQueue;
	
};

