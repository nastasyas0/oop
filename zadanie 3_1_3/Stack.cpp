#include "Stack.h"

Stack::Stack(string name, int size) {
  count = 0;
  this->name = name;
  this->size = size;
  this->mas = new int[size];
}

bool Stack::PUSH(int el) {
  if (count < size) {
    mas[count] = el;
    count++;
    return true;
  }
  else return false;
}
 
bool Stack::POP(int& el) {
  if (count - 1 < 0) return false;
  count--;
  el = mas[count];
  return true;
}

string Stack::GETNAME() {
  return name;
}

int Stack::GETSIZE() {
  return size;
}

Stack::~Stack() {
  delete[] mas;
}
