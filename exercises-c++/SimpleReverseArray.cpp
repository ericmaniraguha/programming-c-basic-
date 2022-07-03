#include<iostream>
#include<iomanip>

using namespace std;

int main() {
  const int LENGTH = 30;
  int i, a[LENGTH];

  cout << "Enter " << LENGTH << " integers : \n";

  for (i = 0; i < LENGTH; i++) cin >> a[i];

  cout << "\nThe same integers in reverse order : \n";

  for (i = 0; i < LENGTH; i++)

    cout << setw(6) << a[LENGTH - i - 1]

    << (i % 10 == 9 ? "\n" : " ");


  cout << endl;
  return 0;
}