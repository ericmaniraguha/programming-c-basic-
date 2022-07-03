#include<iostream>
#include<string>
using namespace std;

void PrintName(const string& name) {
  cout << name << endl;
}

int main() {

  string firstName = "Eric";
  string lastName = "Maniraguha";

  string fullName = firstName + " " + lastName;

  PrintName(fullName); // it is working fine now
  PrintName(firstName + " " + lastName); // it will never work as it is an Lvalue that is why there is const in our method
  return 0;
}