#include "Calculator.cpp"
#include <iostream>
using namespace std;

int main() {
  int a, b;
  char sign;
  Calculator c;
  cin >> a >> sign >> b;
  c.Calc(a, b, sign);
  
  return 0;
}
