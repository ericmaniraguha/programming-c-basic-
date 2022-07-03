#include<iostream>
#include<vector>

using namespace std;

enum class Power {
  Off,
  On
};

int main() {
  Power lightPower{ Power::Off };

  if (lightPower == Power::On) {
    cout << "Light are on !" << endl;
  }
  else {
    cout << "Light is off! " << endl;
  }

}