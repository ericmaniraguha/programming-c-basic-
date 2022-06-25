#include <iostream>
#include <algorithm>
#include <string>
#include <stdlib.h> //rand,srand
#include <time.h>  //time

using namespace std;

int main() {
  int number;

  cout << "How many cars do you have? ";
  cin >> number;
  cin.ignore(); //clear a buffer

  //we are going to create pointer as we do not know how many cars.
  string* pCars = new string[number];

  for (int i = 0; i < number; i++) {
    cout << "Enter car # " << i + 1 << " ";
    getline(cin, pCars[i]);

  }
  cout << "Here is your garage!\n";
  cout << "-----------------------------\n";

  for (int i = 0; i < number; i++) {
    cout << "Parking sport #" << i + 1 << " " << pCars[i] << endl;
  }


  cout << endl;
  return 0;
}