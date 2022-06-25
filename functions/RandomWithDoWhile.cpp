#include <iostream>
#include <algorithm>
#include <string>
#include <stdlib.h> //rand,srand
#include <time.h>  //time

using namespace std;


int main() {
  //pseudo-random numbers

  int number;
  int response;
  int score = 0;

  srand(time(NULL));

  number = rand() % 10 + 1;
  do {
    cout << "Enter your guess (1-10) : ";
    cin >> response;

    if (response > number) {
      cout << "That was too high!\n";
    }
    else if (response < number) {
      cout << "That was too low!\n";
    }
    else {
      cout << "That was correct\n";
    }
    score++;

  } while (number != response);
  cout << "\nNumber is : " << number;
  cout << "\nGuesses : " << score;

  cout << endl;
  return 0;
}