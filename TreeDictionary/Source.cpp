#include<iostream>
#include<fstream>
#include "LinkedList.h"
using namespace std;
int main()
{
	List l;
	int menu;
	fstream fs;
	fs.open("word.txt", fstream::in);
	string word;

	while (!fs.eof())
	{
		getline(fs, word);
		l.insert(word);
	}
	while (1)
	{
		cout << "1.Enter New Word\n2.Search Word\n3.Exit\n";
		cin >> menu;
		if (menu == 1)
		{
			cout << "Enter Word: ";
			cin >> word;
			l.insert(word);
		}

		if (menu == 2)
		{
			cout << "Enter Word: ";
			cin >> word;
			if (l.search(word))
				cout << word << " Found in Tree\n";
			else
				cout << word << " Not Found in Tree\n";
		}
		if (menu == 3)
			break;
		cout << endl;
		system("pause");
		system("cls");

	}	
	return 0;
}