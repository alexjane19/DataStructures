#pragma once
class CircularQueue
{
public:
	CircularQueue();
	CircularQueue(int);
	~CircularQueue();
	int delQueue();
	bool addQueue(int);
	bool isEmpty();
	bool isFull();
	bool createQueue(int);
	int peopleInLine();
	bool turns;
private:
	int front;
	int rear;
	int num;
	int *peopleQueue;
	
};

