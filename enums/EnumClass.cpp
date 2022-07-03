#include<iostream>
#include<string>
using namespace std;



int main() {
  //plain enum
  enum Color1 { red, blue, alpha, green, brown, yellow };

  //class enum
  enum class Color3 { red, blue, alpha, green, brown, yellow };

  Color1 c1 = green;

  switch (c1)
  {
  case red: cout << "Red" << endl; break;
  case yellow: cout << "Yellow" << endl; break;
  case brown: cout << "brown" << endl; break;
  case green: cout << "Green" << endl; break;
  }

  enum class Color2 { red, blue, alpha, green, brown, yellow };

  Color2 c2 = Color2::red;

  switch (c2)
  {
  case Color2::red: cout << "Red" << endl; break;
  case Color2::yellow: cout << "Yellow" << endl; break;
  case Color2::blue: cout << "Blue" << endl; break;
  case Color2::green: cout << "Green" << endl; break;
  }

  cout << endl;
  return 0;
}