#include <iostream>
#include <algorithm>
#include <string>
#include <stdlib.h> //rand,srand
#include <time.h>  //time

using namespace std;

int main() {
  int numbers[3][4] = {
    {3,4,5,6 },
    { 7,8,9 ,10},
    { 11,12,13 ,14},
  };
  for (int row = 0; row < 3; row++) {
    for (int col = 0; col < 4; col++) {
      cout << numbers[row][col] << " ";
    }
    cout << endl;
  }


  cout << endl;
  return 0;
}