#include<iostream>
#include<string>
using namespace std;

enum class Color1 { red, blue, alpha, green, brown, yellow };
int fun(Color1 c) {

  switch (c)
  {
  case Color1::red: cout << "Red" << endl; break;
  case Color1::yellow: cout << "Yellow" << endl; break;
  case Color1::brown: cout << "brown" << endl; break;
  case Color1::green: cout << "Green" << endl; break;
  }
}
int main() {
  fun(Color1::red);
  fun(Color1::yellow);
  fun(Color1::brown);
  fun(Color1::green);


  cout << endl;
  return 0;
}