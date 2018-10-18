#include "Student.h"

int Student::numOfstudents = 0;
Student::Student()
{
fname = "";
lname = "";
numstu="";
numcourse=0;
GPA=00.00;
}


Student::~Student()
{
	fname = "";
	lname = "";
	numstu = "";
	numcourse = 0;
	GPA = 00.00;
}

Student Student::addStu()
{
cout << "Enter FristName: ";
cin >> fname;
cout << "Enter LastName: ";
cin >> lname;
cout << "Enter Number's Student: ";
cin >> numstu;
cout << "Enter Number's Course: ";
cin >> numcourse;
cout << "Enter GPA: ";
cin >> GPA;
Student::numOfstudents++;
return *this;
}
string Student::getnumStu()
{

	return numstu;

}
float Student::getGPA()
{
	return GPA;
}
int Student::getCourse(){
	return numcourse;
}
string Student::getLastName(){
	return lname;
}
string Student::getFirstName(){
	return fname;
}
ostream &operator<<(ostream &os, Student stu)
{
	os << "\nEnter FristName: " << stu.getFirstName() << "\nEnter LastName: " << stu.getLastName() << "\nEnter Number's Student: "
		<< stu.getnumStu() << "\nEnter Number's Course: " << stu.getCourse() << "\nEnter GPA: " << stu.getGPA();
	return os;
}

