#include<iostream>
#include "LinkedList.h"
using namespace std;
int main()
{
	List students;
	string s1;
	
	int menu;
	do{
		system("cls");
		cout << "1.Add Student\n2.Remove Student By NumStu\n3.Find First Student\n"
			<< "4.GPA's All Students\n5.Sort By LastName\n6.Number Of Students\n7.Print\n";
		cin >> menu;
		switch (menu)
		{
		case 1:
			students.addStu();
			break;
		case 2:
			cout << "Please Enter a NumStu: ";
			cin >> s1;
			students.delStu(s1);
			break;
		case 3:
			cout << "First Student: \n" << students.findFirstStu();
			break;
		case 4:
			cout << "GPA's All Students:" << students.aveGPAofAllStu();
			break;
		case 5:
			students.orderByLastName();
			break;
		case 6:
			cout << students.numsAllStudents();
			break;
		case 7:
			students.print();
			break;
		default:
			exit(0);
			break;
		}
		cout << endl;
		system("pause");
	} while (1);

	return 0;
}