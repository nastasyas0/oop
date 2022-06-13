#include "Class4.h"
#include <iostream>
 
Cl_4::Cl_4(int a1, int a2, int a3, int a4) : Cl_3(a1, a2, a3, a4) {}

int Cl_4::Calc(int x) {
  return a1*x + a2*x*x + a3*x*x*x + a4*x*x*x*x;
}
