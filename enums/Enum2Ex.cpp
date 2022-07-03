#include<iostream>
using namespace std;

enum SuperCars { veron = 302, veryon = 255, volkyrie = 245, Rodster = 250 };
int main() {

  SuperCars speed1;
  SuperCars speed2;

  speed1 = volkyrie;
  speed2 = Rodster;

  if (speed1 < speed2) {
    cout << "The Volkyerie is running fast then Rodster with " << speed2 << endl;
  }
  else {
    cout << "The Rodster is running not fast then volkyrie with " << speed1 << endl;
  }

  cout << endl;
  return 0;
}