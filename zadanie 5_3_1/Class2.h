#ifndef __CLASS2_H
#define __CLASS2_H
#include "Class1.h"

class Cl_2 : public Cl_1 {
public:
  Cl_2(int a1, int a2, int a3, int a4);
  virtual int Calc(int x);
};

#endif
