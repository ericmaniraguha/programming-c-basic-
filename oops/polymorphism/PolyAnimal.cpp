#include<iostream>
#include<string>
using namespace std;

//Polymorphism ==> occurs when we have many classes that are related to each other by inhertance.

class Animal {
public:
  void animalEat() {
    cout << "\nSome animal are carnivores others are herbivores\n";
  }
};

class Pig : public Animal {
public:
  void animalEat() {
    cout << "The pig is omnivores.\n";
  }
};
class Dog : public Animal {
public:
  void animalEat() {
    cout << "The dog is carnivores.\n";
  }
};

int main() {

  Animal myAnimal;
  Pig myPig;
  Dog myDog;

  myAnimal.animalEat();
  myDog.animalEat();
  myPig.animalEat();

  return 0;
}