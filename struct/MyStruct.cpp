#include<iostream>
#include<string>
using namespace std;

struct {

  int age;
  string name;

}person1, person2, person3;

int main() {


  //assign values to member of my structure;

  person1.name = "Mr. Kamaro Didier";
  person1.age = 36;

  person2.name = "Mrs. Carla Orane";
  person2.age = 12;

  person3.name = "Mr. Mudidi Emmanuel";
  person3.age = 55;

  cout << "He is " << person1.name << " with age of " << person1.age << endl;
  cout << "She is " << person2.name << " with age of " << person2.age << endl;
  cout << "He is " << person3.name << " with age of " << person3.age << endl;


  cout << endl;
  return 0; // default
}