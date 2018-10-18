#include "CircularQueue.h"

CircularQueue::CircularQueue()
{	
	num = 0;
	turns = false;
}

CircularQueue::~CircularQueue()
{
	this->num = 0;
}

int CircularQueue::delQueue()
{
	int item;
	if (isEmpty())
		return 0;
	item = peopleQueue.remove();
	num--;
	return item;
}
bool CircularQueue::addQueue(int item)
{
	peopleQueue.insert(item);
	num++;
	return true;
}
bool CircularQueue::isEmpty()
{
	if (num == 0)
		return true;
	return false;
}


int CircularQueue::peopleInLine()
{
	return num;
}