#include<iostream>

using namespace std;

class Employee {
private:
  int salary;

public:
  void setSalary(int s) {
    salary = s;
  }
  int getSalary() {
    return salary;
  }
};

int main() {
  Employee empObj;

  empObj.setSalary(50000);
  cout << empObj.getSalary();

  cout << endl;
  return 0;
}