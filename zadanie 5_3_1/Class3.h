#ifndef __CLASS3_H
#define __CLASS3_H
#include "Class2.h"

class Cl_3 : public Cl_2 {
public:
  Cl_3(int a1, int a2, int a3, int a4);
  virtual int Calc(int x);
};

#endif
