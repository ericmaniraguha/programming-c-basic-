#include<iostream>
using namespace std;
int main() {
  int s = 0;
  int n = 10;
  for (int i = 1; i <= n; i++) {

    s += i;
    if ((i % 10) != 0) {
      // continue;
      cout << s << endl;
    }
  }


  cout << endl;
  return 0;
}

