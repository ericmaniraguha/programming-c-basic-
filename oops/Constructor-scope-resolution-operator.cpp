#include <iostream>
#include <algorithm>
#include <string> 
#include <stdlib.h> //rand,srand
#include <time.h>  //time
using namespace std;


// a contructor is a f(x) called when an object is instantiated
// it is useful for assigning arguments to variables

class Human {
public:
  string name;
  int age;
  double weight;
  Human(string n, int age, double w);
};

//with scope resolution :: operator  -- constructor is outside a class
Human::Human(string n, int age, double w) {

  this->name = n;
  this->age = age;
  this->weight = w;
}


int main() {

  Human h1("Mr. Kamanzi", 65, 98.23);
  Human h2("Mrs. Alice", 30, 75.88);

  cout << "\n------List of all People------- " << endl;
  cout << h1.name << " has " << h1.weight << " Kgs with " << h1.age << " Years" << endl;
  cout << h2.name << " has " << h2.weight << " Kgs with " << h2.age << " Years" << endl;


  cout << endl;
  return 0;
}