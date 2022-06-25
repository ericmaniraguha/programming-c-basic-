#include <iostream>
using namespace std;

//base class
class HomeClass {
public:
  void houseAddress() {
    cout << "TKT-785, Kigali, Rwanda.\n";
  }
};
//another base class
class MyOtherHomeClass {
public:
  void houseRooms() {
    cout << "\nThe house has 4 rooms, 2 bathrooms and one dining room.\n";
  }
};
//derrived classes
class MyDerieveClass : public HomeClass, public MyOtherHomeClass {

};



int main() {

  MyDerieveClass classObj;
  classObj.houseRooms();
  classObj.houseAddress();


  cout << endl;
  return 0;
}
