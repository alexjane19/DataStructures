#include<string>
using namespace std;
class Node{
public:
	friend class  List;
	Node()
	{
		next = back = 0;
	}
private:
	string data;
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
	void insert(std::string &value)
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
	string remove()
	{
		if (first == 0)
			return "";
		Node *item = first;
		first = first->next;
		string itemData = item->data;
		delete item;
		return itemData;
	}
	~List()
	{
		delete[] first;
	}
};