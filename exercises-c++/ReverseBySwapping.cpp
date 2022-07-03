#include<iostream>
using namespace std;

//function to display array 
void display(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

int main() {
  int array[] = { 4,5,1,3,9 };

  int size = sizeof(array) / sizeof(array[0]), temp = 0;
  int i = 0; //pointing 1st element of the array
  int j = size - 1; //pointing last element of the array

  while (i < j) {
    //swap
    temp = array[i];
    array[i] = array[j];
    array[j] = temp;

    //update i and j 
    i++;
    j--;
  }
  //output the array 
  display(array, size);

  cout << endl;
  return 0;
}