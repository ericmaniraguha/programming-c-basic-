#include<iostream>
#include<string>
using namespace std;
enum mobile { BatteryCapacity = 1, CameraQuality = 3, LargeStorage = 5 };


int main() {


  int features = CameraQuality | LargeStorage;

  cout << "Features : " << features << endl;
  cout << endl;
  return 0;
}