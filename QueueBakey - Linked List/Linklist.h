#include<string>
#include<iostream>
using namespace std;
class Node{
public:
	friend class  List;
	Node()
	{
		next = back = 0;
	}
private:
	int data;
	Node *next;
	Node *back;

};
class List
{
private:
	Node *first;
	Node *last;
public:

	List()
	{
		first = last = 0;
	}
	void insert(int &value)
	{
		Node *p = new Node;
		p->data = value;
		if (first == 0)
			first = last = p;
		else
		{
			p->next = first;
			first->back = p;
			first = p;
		}
	}
	int remove()
	{
		if (first == 0)
			return 0;
		Node *item = last;
		last = last->back;
		int itemData = item->data;
		delete item;
		return itemData;
	}

	~List(){
				if (first!=0)
				{
					//cout << "Destroying nodes ...\n";
		
					Node *currentPtr = first;
					Node *tempPtr;
		
					while (currentPtr != 0)
					{
						tempPtr = currentPtr;
					//	cout << tempPtr->data << '\n';
						currentPtr = currentPtr->next;
						delete tempPtr;
					}
				}
		
				//cout << "All nodes destroyed\n\n";
			}

};