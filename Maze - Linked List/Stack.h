#ifndef STACK_H
#define STACK_H
#include<iostream>
#include<string>
#include "Linklist.h"
using namespace std;

#define M 29
int Calculate(char**);
class Stack{
      
      List Items; 
   public:
	   int MyTop;
      Stack();
      void Push(string);
      string Pop();       
      int Empty();
      
};
#endif
