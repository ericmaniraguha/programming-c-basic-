#include<iostream>
using namespace std;

void SetValue(const int& value) {

}

int main() {

  int i = 10;

  // int& a = 10 // this can not work

  // the compile will create a temp variable which will facilitate the assignment to the other variable
 /*  int temp = 10;
  const int& a = temp; */

  // const int& a = 10;
  SetValue(i);
  SetValue(10);

  return 0;
}