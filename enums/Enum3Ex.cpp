#include<iostream>
using namespace std;

enum light { stop = 100, slow = 500, go = 1000 };
enum lights { stops, slows, gos };

int main() {

  cout << stops << "\t" << slows << "\t" << gos << endl;
  cout << stop << "\t" << slow << "\t" << go << endl;
  return 0;
}