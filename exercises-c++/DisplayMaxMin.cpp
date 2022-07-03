#include <iostream>
using namespace std;

int main() {

  int a[5], max, min;


  cout << "Please, enter 5 numbers to check max and min.";
  for (int i = 0; i < 5; i++) {
    cout << i << ".Number :";
    cin >> a[i];
  }
  max = min = a[0];

  for (int i = 1;i < 5;i++) {
    if (a[i] > max)
      max = a[i];

    else
      if (min > a[i])

        min = a[i];
  }
  cout << "max: " << max << endl;
  cout << "min: " << min << endl;
  cout << endl;
  return 0;
}
