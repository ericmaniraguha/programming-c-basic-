#include<iostream>

using namespace std;
int maximum = ar[0];
int minimum = ar[0];
for (int i = 0;i < 5;i++)
{
  if (ar[i] > maximum)
    maximum = ar[i];
  if (ar[i] < minimum)
    minimum = ar[i];
}
int main()
{
  int ar[5];
  for (int i = 0;i < 5;i++)
    cin >> ar[i];
  int maximum = *max_element(ar, ar + 5);
  int minimum = *min_element(ar, ar + 5);
  cout << maximum << endl << minimum;
  return 0;
}