#include<iostream>
#include "CircularQueue.h"
using namespace std;
int main()
{
	int capacityBakery,i=0,j=0;
	char command;
	CircularQueue wemonQueue;
	CircularQueue menQueue;

	menQueue.turns = true;
	while (1)
	{
		cout << "1.For Entering People In Line: Type \'E\'\n2.For Showing Number Avilable People In Line: Type \'S\'\n3.For Overall Turns Off: Type \'N\'\n5.For Exiting: Type \'Q\'\n";
		cin >> command;

		system("cls");
		if (command == 'E' || command == 'e')
		{
			cout << "if Male: type \'M\' \n OR\nif Female: type \'F\'\n\n";
			cin>>command;
			if (command == 'M' || command == 'm')
			{
				i++;
				menQueue.addQueue(i);
			}
			if (command == 'F' || command == 'f')
			{
				j++;
				wemonQueue.addQueue(j);
			}
		}
		
		else if (command == 'S' || command == 's')
		{
			cout<<"Number Of People In Men's Line: "<<menQueue.peopleInLine()<<endl;
			cout << "Number Of People In Wemon's Line: " << wemonQueue.peopleInLine()<<endl<<endl;
		}
		else if (command == 'N' || command == 'n')
		{
			if (!menQueue.isEmpty())
			{
				if (wemonQueue.isEmpty())
					menQueue.turns = true;

				if (menQueue.turns)
				{
					menQueue.delQueue();
					menQueue.turns = false;
					wemonQueue.turns = true;
					continue;
				}
			}
			if (!wemonQueue.isEmpty())
			{
				if (menQueue.isEmpty())
					wemonQueue.turns = true;

				if (wemonQueue.turns)
				{
					wemonQueue.delQueue();
					menQueue.turns = true;
					wemonQueue.turns = false;
					continue;
				}
			}

			

		}

		if (command == 'Q' || command == 'q' || (wemonQueue.isEmpty() && menQueue.isEmpty()))
			break;
		
	}
	return 0;

}