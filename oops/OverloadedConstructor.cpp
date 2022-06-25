#include <iostream>
#include <algorithm>
#include <string> 
#include <stdlib.h> //rand,srand
#include <time.h>  //time
using namespace std;

class PizzaClass {
public:
  string bread;
  string topping;
  string sauce;
  string cheese;


  PizzaClass(string bread, string sauce, string cheese, string topping) {
    this->bread = bread;
    this->sauce = sauce;
    this->cheese = cheese;
    this->topping = topping;
  }
  PizzaClass(string sauce, string cheese, string topping) {

    this->sauce = sauce;
    this->cheese = cheese;
    this->topping = topping;
  }

  PizzaClass(string cheese, string topping) {

    this->cheese = cheese;
    this->topping = topping;
  }

  PizzaClass(string bread) {
    this->bread = bread;

  }

  void orderPizza() {
    cout << "\nHere is your :";
    if (!bread.empty())
      cout << bread << " - ";
    if (!sauce.empty())
      cout << sauce << " - ";
    if (!cheese.empty())
      cout << cheese << " - ";
    if (!topping.empty())
      cout << topping << " ";
    cout << " \nPizza" << endl;

  }
};


int main() {

  PizzaClass first_order("thick crust", "red sauce", "mozzerella", "vegetables");
  PizzaClass second_order("red sauce");
  PizzaClass third_order("thick crust", "mozzerella");
  PizzaClass fourth_order("thick crust", "red sauce", "mozzerella");



  first_order.orderPizza();
  second_order.orderPizza();
  third_order.orderPizza();
  fourth_order.orderPizza();



  cout << endl;
  return 0;
}