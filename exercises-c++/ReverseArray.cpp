#include<iostream>
using namespace std;

int main() {

  int array[] = { 15,25,45,2,6 };

  //find the size of array 
  int size = sizeof(array) / sizeof(array[0]);

  //declare new array to store reverse of origin array
  int k = 0, reverse[size];

  //Loop from back and assign value to new arrays
  for (int i = size - 1; i >= 0;) {
    reverse[k++] = array[i--];
  }

  //output the reverse arrays
  for (int i = 0; i < size; i++) {
    cout << reverse[i] << ",";
  }

  cout << endl;
  return 0;
}