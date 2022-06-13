#ifndef __STACK_H
#define __STACK_H

#include <iostream>
#include <string>
using namespace std;

class Stack {
private:
  string name;
  int size, count;
  int* mas;
public:
  Stack(string name, int size);
  bool PUSH(int el);
  bool POP(int& el);
  string GETNAME();
  int GETSIZE();
  ~Stack();
};

#endif
