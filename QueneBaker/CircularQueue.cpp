#include "CircularQueue.h"

CircularQueue::CircularQueue()
{
	front = rear = 0;
	peopleQueue = 0;
	turns = false;
}
CircularQueue::CircularQueue(int num)
{
	createQueue(num);
	turns = false;
}

CircularQueue::~CircularQueue()
{
	if (num>0 && peopleQueue)
		delete [] peopleQueue;
	this->num = 0;
	front = rear = 0;
}

int CircularQueue::delQueue()
{
	int item;
	if (isEmpty())
		return 0;

	front = (front + 1) % num;
	item = peopleQueue[front];
	return item;
}
bool CircularQueue::addQueue(int item)
{
	if (isFull())
		return false;
	rear = (rear + 1) % num;
	peopleQueue[rear] = item;
	return true;
}
bool CircularQueue::isEmpty()
{
	if (front == rear)
		return true;
	return false;
}
bool CircularQueue::isFull()
{
	if (front == (rear + 1) % num)
		return true;
	return false;
}
bool CircularQueue::createQueue(int num)
{
	this -> num = num;
	peopleQueue = new int[this->num];
	if (!peopleQueue)
		return false;
	return true;
}
int CircularQueue::peopleInLine()
{
	return (rear - front) > 0 ? (rear - front) : (front - rear);
}