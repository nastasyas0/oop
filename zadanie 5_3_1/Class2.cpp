#include "Class2.h"
#include <iostream>
 
Cl_2::Cl_2(int a1, int a2, int a3, int a4) : Cl_1(a1, a2, a3, a4) {}

int Cl_2::Calc(int x) {
  return a1*x + a2*x*x;
}
