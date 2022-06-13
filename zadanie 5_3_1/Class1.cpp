#include "Class1.h"
#include <iostream>

Cl_1::Cl_1(int a1, int a2, int a3, int a4) {
  this->a1 = a1;
  this->a2 = a2;
  this->a3 = a3;
  this->a4 = a4;
}

int Cl_1::Calc(int x) {
  return a1*x;
}
