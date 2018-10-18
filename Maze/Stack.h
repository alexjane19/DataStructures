#ifndef STACK_H
#define STACK_H
#include<iostream>
#include<string>
#include<conio.h>
using namespace std;

#define M 29
int Calculate(char**);
class Stack{
      
      string Items[M]; 
   public:
	   int MyTop;
      Stack();
      void Push(string);
      string Pop();       
      int  Empty();
      
};
#endif
