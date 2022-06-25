#include<iostream>
using namespace std;

//Parent class
class Myclass {
public:
  void myFunction() {
    cout << "\nSome content in parent class.\n";
  }
};

//child class
class Mychild : public Myclass {

};

//Grandchild class
class MyGrandChild : public Mychild {



};

int main() {
  MyGrandChild myObject;
  myObject.myFunction();


  return 0;
}