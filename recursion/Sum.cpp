#include<iostream>

using namespace std;

int sum(int n) {
  if (n != 0) {
    return n + sum(n - 1);
  }
  return 0;
}

int main() {
  int num;
  cout << "Enter the numbers: ";
  cin >> num;
  cout << "Sum is : " << sum(num);

  cout << endl;
  return 0;
}