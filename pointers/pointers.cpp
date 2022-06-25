#include <iostream>
#include <algorithm>
#include <string>
#include <stdlib.h> //rand,srand
#include <time.h>  //time

using namespace std;
//pointers are used in memory allocation
/// & address of operator
// = *deference operator
//pointer is a valiable that store an address of another valiable

int main() {

  string name = "Carla Orane";
  int age = 8;
  string food = "cheese";

  //create a pointer which is holding an address of a value (assigned)
  string* pName = &name;
  int* pAge = &age;
  string* pFood = &food;


  cout << "\nDisplaying addresses in RAM of values." << endl;
  cout << &name << " \n" << &age << "\n" << &food << endl; // displaying address in memory for each value (location in RAM - temporary addresses that is why they values)
  cout << endl;


  //display pointers
  cout << "Displaying pointers." << endl;
  cout << pName << endl;
  cout << pAge << endl;
  cout << pFood << endl;
  cout << endl;

  //display Display values by refering to pointers
  cout << "Displaying Values by refering from pointers." << endl;
  cout << *pName << endl;
  cout << *pAge << endl;
  cout << *pFood << endl;
  cout << endl;



  cout << endl;
  return 0;
}