#include<iostream>
#include<string>

using namespace std;

int main() {
  try {
    int age = 20;
    if (age >= 18)
      cout << "\nAccess granted - you are old enough.\n";
    else
      throw(age);
  }
  catch (int myNum) {
    cout << "Access denied - You must be at least 18 years old\n";
  }


  cout << endl;
  return 0;
}