#pragma once
#include<string>
#include <iostream>
using namespace std;
class Student
{
	friend class List;
	string fname;
	string lname;
	string numstu;
	int numcourse;
	float GPA;
	static int numOfstudents;
public:
	Student();
	Student addStu();
	string getnumStu();
	float getGPA();
	int getCourse();
	string getLastName();
	string getFirstName();
	~Student();
	 friend ostream &operator<<(ostream &,Student);
};

