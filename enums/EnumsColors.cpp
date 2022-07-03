#include<iostream>
using namespace std;

enum colors { red, yellow, green, brown };

int main() {
  colors select = red;

  switch (select) {
  case red:
    cout << "It is red";
    break;

  case yellow:
    cout << "It is Yellow";
    break;

  case green:
    cout << "It is green";
    break;

  case brown:
    cout << "It is brown";
    break;

  default:
    cout << "Not specified...";
  }

  cout << endl;
  return 0;
}