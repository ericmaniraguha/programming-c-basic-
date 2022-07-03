#include<iostream>
using namespace std;

int& GetValue() {  // using reference &
  static int value = 10;
  return value;
}

int main() {
  int i = GetValue();
  GetValue() = 10;
  cout << "value" + GetValue();

  cout << endl;
  return 0;
}