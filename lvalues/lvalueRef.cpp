#include<iostream>
#include<string>
using namespace std;

void PrintName(string& name) {
  cout << "[lvalue]" << name << endl;
}


void PrintName(string&& name) {
  cout << "[rvalue]" << name << endl;
}

int main() {

  string firstName = "Eric";
  string lastName = "Maniraguha";

  string fullName = firstName + " " + lastName;

  PrintName(fullName); // it is working fine now
  PrintName(firstName + " " + lastName);

  cin.get();
  return 0;
}