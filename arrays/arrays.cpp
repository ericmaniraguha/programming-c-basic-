#include <iostream>
#include <algorithm>
#include <string>
#include <stdlib.h> //rand,srand
#include <time.h>  //time

using namespace std;


int main() {

  int years[] = { 2022,2021,2020,2019,2018 };
  string cars[] = { "Corvette","BMW","Benz","Ferrari", "Audi" };
  cars[3] = "Wow";


  for (int i = 0; i < size(cars) || i < size(years); i++)
  {
    cout << cars[i] << " " << endl;
    cout << years[i] << " ";
  }

  cout << endl;
  return 0;
}