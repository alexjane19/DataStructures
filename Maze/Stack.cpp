#include<iostream>
#include<string>
#include<conio.h>
#include "Stack.h"
using namespace std;

int IsOperand(char Symbol)
{
  if(Symbol >= '0' && Symbol <= '9')
    return 1;
  return 0;  
}

//-----------------------------------

Stack::Stack()
{
  MyTop = -1;
}

//----------------------------------

void Stack::Push(string x)
{

  Items[++MyTop] = x;
}

//----------------------------------

string Stack::Pop()
{
  return Items[MyTop--];
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

