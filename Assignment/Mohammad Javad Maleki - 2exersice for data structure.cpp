#include<iostream>

using namespace std;
#include<string>
#include<iostream>
using namespace std;
class Node{
public:
	friend class  List;
	Node(const int &info) : data(info), next(0),back(0){}
	int getData() const{
		return data;
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

	Node *getNewNode(const int &value)
	{
		return new Node(value);
	}

public:

	List()
	{
		first = last = 0;
	}

	void insert(int value)
	{
		Node *p = new Node(value);
		if (first == 0)
			first = last = p;
		else
		{
			p->next = first;
			first->back = p;
			first = p;
		}
	}
	bool order()
	{
		if (isEmpty())
			return false;
		else
		{
	
			Node* current = first->next;
			Node *temp;
		
			for (; current; current = current->next)
			for (Node * prev = first; prev->next; prev = prev->next)
			if (prev->data > prev->next->data)
			{
				Node *temp1 = new Node(prev->data);
				prev = prev->next;
				prev->back = prev->back->back;
				prev->back->next = prev;
				temp = prev->next;
				prev->next = temp1;
				prev->next->next = temp;
				prev->next->back = prev;
				if (prev->next->next)
				prev->next->next->back = prev->next;

			}
		}
		return true;
	}
	~List(){
		if (first != 0)
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
	bool isEmpty() const{
		return first == 0;
	}
	void print() const{
		if (isEmpty())
		{
			cout << "The list is empty\n\n";
			return;
		}

		Node *currentPtr = first;

		cout << "The list is: ";

		while (currentPtr != 0)
		{
			cout << currentPtr->data << ' ';
			currentPtr = currentPtr->next;
		}

		cout << "\n\n";
	}


};

int main()
{
	List l1;
	l1.insert(1373);
	l1.insert(1383);
	l1.insert(1393);
	l1.insert(1353);
	l1.insert(1343);
	l1.insert(1323);
	l1.order();
	l1.print();
	return 0;
}