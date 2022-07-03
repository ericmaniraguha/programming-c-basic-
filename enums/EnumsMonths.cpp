#include<iostream>
#include<string>
using namespace std;

enum months { January, february, March, April, May, June, July, August, September, October, November, December };
int main() {

  months m;
  m = March;

  cout << "Month is : " << m + 1 << endl;

  cout << endl;
  return 0;
}
