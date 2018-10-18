#include<iostream>
#include<string>
#include<conio.h>
#include "Stack.h"


using namespace std;

Stack::Stack()
{
  MyTop = -1;
}

//----------------------------------

void Stack::Push(string x)
{
	MyTop++;
    Items.insert(x);
  
}

//----------------------------------

string Stack::Pop()
{
	MyTop--;
  return Items.remove();
}

//----------------------------------

int Stack::Empty()
{
  if(MyTop == -1)
    return 1;
  else 
    return 0;
  //return (MyTop == -1);    
}

