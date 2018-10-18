#include<iostream>
#include<string>
#include "Student.h"
using namespace std;

class ListNode
{
	friend class List;

public:
	ListNode(const Student &info) : data(info), next(0){} 
	Student getData() const{
		return data;
	}
private:
	Student data;
	ListNode *next;
};

class List
{
private:
	ListNode *firstPtr;
	ListNode *lastPtr;


	ListNode *getNewNode(const Student &value)
	{
		return new ListNode(value);
	}

public:
	Student newstu;
	List() : firstPtr(0), lastPtr(0)
	{
		
	}
	~List(){
		if (!isEmpty())
		{
			cout << "Destroying nodes ...\n";

			ListNode *currentPtr = firstPtr;
			ListNode *tempPtr;

			while (currentPtr != 0)
			{
				tempPtr = currentPtr;
			cout << tempPtr->data;
			cout << endl;
				currentPtr = currentPtr->next;
				delete tempPtr;
			}
		}

		cout << "All nodes destroyed\n\n";
	}
	void addStu(){

		ListNode *newPtr = getNewNode(newstu.addStu());

		if (isEmpty())
		{
			firstPtr = lastPtr = newPtr;
			firstPtr->next = firstPtr;
		}
		else
		{
			newPtr->next = firstPtr;
			firstPtr = newPtr;
			lastPtr->next = firstPtr;
		}
	
	}

	bool isEmpty() const{
		return firstPtr == 0;
	}
	
	void print() const{
		if (isEmpty())
		{
			cout << "The list is empty\n\n";
			return;
		}

		ListNode *currentPtr = firstPtr;

		cout << "The list is: ";
		do
		{
			cout << currentPtr->data <<endl;
			currentPtr = currentPtr->next;
		} while (currentPtr != lastPtr->next);


		cout << "\n\n";
	}

	bool delStu(string &value)
	{
		if (isEmpty())
			return false;
		else
		{
			ListNode* current = firstPtr;

			ListNode * prev = (ListNode *)malloc(sizeof(ListNode));
			do
			{
				if (current->data.getnumStu() != value)
				{
					prev = current;
					current = current->next;
				}
				else
				{
					prev->next = current->next;
					delete current;
					return true;
				}
			} while (current != lastPtr->next);
		}

	}
	Student findFirstStu()
	{
		if (isEmpty())
			return Student();
		else
		{
			ListNode* current = firstPtr->next;
			Student temp;
			for (; current!=lastPtr->next; current = current->next)
			for (ListNode * prev = firstPtr; prev!=lastPtr; prev = prev->next)
			if (prev->data.getGPA() <= prev->next->data.getGPA())
			{
				temp = prev->next->data;
				prev->next->data = prev->data;
				prev->data = temp;
			}
		}
		return firstPtr->data;

	}


	bool orderByLastName()
	{
		if (isEmpty())
			return false;
		else
		{
			ListNode* current = firstPtr->next;
			Student temp;
			for (; current!=lastPtr->next; current = current->next)
			for (ListNode * prev = firstPtr; prev!=lastPtr; prev = prev->next)
			if (prev->data.getLastName().compare(prev->next->data.getLastName())>0)
			{
				temp = prev->next->data;
				prev->next->data = prev->data;
				prev->data = temp;

			}
		}
		return true;
	}

	float aveGPAofAllStu()
	{
		float GPA=0;
		for (ListNode *current = firstPtr; current != lastPtr->next; current=current->next)
			GPA += current->data.getGPA();
		GPA /= Student::numOfstudents;
		return GPA;
	}
	int numsAllStudents()
	{
		return firstPtr->data.numOfstudents;
	}

};
