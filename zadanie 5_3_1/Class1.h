#ifndef __CLASS1_H
#define __CLASS1_H

using namespace std;

class Cl_1 {
protected:
  int a1, a2, a3, a4;
public:
  Cl_1(int a1, int a2, int a3, int a4);
  virtual int Calc(int x);
};

#endif
