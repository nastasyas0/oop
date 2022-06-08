#include <iostream>
#include <vector>
using namespace std;
class Calculator {
public:
  void Calc(int& a, int& b, char& sign) {
    int j = 1;
    vector <int> answers;
    
    while (sign != 'C') {
      if (j > 1) {
        cin >> sign;
        if (sign == 'C') {
          break;
        }
        else cin >> b;
      }
      
      if (sign == '+') a = a + b;
      else if (sign == '-') a = a - b;
      else if (sign == '*') a = a * b;
      else a = a % b;
      
      if (j % 3 == 0) {
        answers.push_back(a);
      }
      j++;
    }
    
    for (int i = 0; i < answers.size(); i++) {
      if (i == answers.size() - 1) cout << answers[i];
      else cout << answers[i] << endl;
    }
  }
};
