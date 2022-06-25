#include <iostream>
#include <algorithm>
#include <string>
#include <stdlib.h> //rand,srand
#include <time.h>  //time

using namespace std;

int main() {
  char keyboard[4][10] = {
    {'1','2','3','4','5','6','7','8','9','0'},
    {'Q','W','E','R','T','Y','U','I','O','P'},
    {'A','S','D','F','G','H','J','K','L',';'},
    {'Z','X','C','V','B','N','M',',','.','/'}

  };

  for (int row = 0; row < 4; row++) {
    for (int col = 0; col < 10; col++) {
      cout << keyboard[row][col] << " ";
    }
    cout << endl;
  }

  cout << endl;
  return 0;
}