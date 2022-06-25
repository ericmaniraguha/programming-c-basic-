#include <iostream>
#include <algorithm>
#include <string>
#include <stdlib.h> //rand,srand
#include <time.h>  //time

using namespace std;


int main() {
  //pseudo-random numbers

  srand(time(NULL));

  int number = rand() % 6 + 1; // I will be able to display 0 up to 6
  int number1 = rand() % 6; // I will be able to display 0 up to 5
  int number2 = rand() % 11 + 1; // I will be able to display 0 up to 11

  cout << number << " ";
  cout << number1 << " ";
  cout << number2 << " ";

  cout << endl;
  return 0;
}