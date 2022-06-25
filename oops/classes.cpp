#include <iostream>
#include <algorithm>
#include <string> 
#include <stdlib.h> //rand,srand
#include <time.h>  //time
using namespace std;


class Human {  //a class is a blue print of what characteristics and f(x) that an object should have 

public:
  string name;
  int age;
  double weight;

  void eat(string snacks) {
    cout << "\nThis person likes " + snacks << endl;
  }
  void drink(string beer) {
    cout << "Again he likes : " + beer << endl;

  }
  void sleeping(int time) {
    cout << "He likes to sleep around : " << time << " AM" << endl;

  }
  void sport() {
    cout << this->name << " goes to gym. " << endl;
  }

};

int main() {

  //instantiant an object -- create an object 
//Human I
  Human h1;
  h1.name = "Mr. Kamanzi";
  h1.age = 25;
  h1.weight = 89.25;

  cout << h1.name << " With age of " << h1.age << " years" << " " << h1.weight << endl;
  h1.eat("nuts");
  h1.drink("wine");
  h1.sleeping(1);
  h1.sport();

  // Human II

  Human h2;
  h2.name = "Mrs. Caline Manzi";
  h2.age = 30;
  h2.weight = 102.25;


  cout << "\n======================= Human II=========================" << endl;
  cout << h2.name << " With age of " << h2.age << " years" << " " << h2.weight << endl;
  h2.eat("cheese");
  h2.drink("water");
  h2.sleeping(10);
  h2.sport();


  cout << endl;
  return 0;
}