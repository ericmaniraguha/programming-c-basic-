#include<iostream>
using namespace std;

intGetValue() {

  return 10;
}

int main() {
  int i = GetValue();
  GetValue() = 10;
  cout << "value" + GetValue();

  cout << endl;
  return 0;
}

//this one will never work as GetValue’ was not declared in this scope;