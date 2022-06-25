#include<iostream>
using namespace std;

int main() {

  int size;
  int* ptr;

  cout << "Enter number of value you want to store(size of an array): " << endl;
  cin >> size;

  ptr = new int[size];
  cout << "Enter values : " << endl;

  for (int i = 0; i < size; i++) {
    cin >> ptr[i];
  }
  cout << "values in the array are : " << " " << endl;

  for (int i = 0; i < size; i++) {
    cout << ptr[i] << " ";
  }
  cout << endl;


  cout << endl;
  return 0;
}
