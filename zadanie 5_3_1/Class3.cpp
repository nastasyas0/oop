#include "Class3.h"
#include <iostream>
 
Cl_3::Cl_3(int a1, int a2, int a3, int a4) : Cl_2(a1, a2, a3, a4) {}

int Cl_3::Calc(int x) {
 return a1*x + a2*x*x + a3*x*x*x;
}
