#include<iostream>


using namespace std;

enum capitain { Avi, Sid, Robby, Sami, Jake };
int main() {
  capitain cap = Avi;
  if (cap == Avi) {
    cout << "The capitain is Avi, it value is : " << Avi << endl;
  }
  else {
    cout << "Capitain not specified";
  }

  cout << endl;
  return 0;
}