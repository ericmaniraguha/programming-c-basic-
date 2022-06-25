#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// overloading function

void bakePizza(string bread, string vegetables)
{
  cout << "====== Your Pizza will be having : ======" << endl;
  cout << bread << " ";
  cout << vegetables << " ";
  cout << "Pizza" << endl;
}

void bakePizza(string bread, string sauce, string cheese)
{
  cout << "====== Your Pizza will be having : ======" << endl;
  cout << bread << " ";
  cout << sauce << " ";
  cout << cheese << " ";
  cout << "Pizza" << endl;
}

void bakePizza(string bread, string sauce, string beefmeat, string cheese)
{

  cout << "====== Your Pizza will be having : ======" << endl;
  cout << bread << " ";
  cout << sauce << " ";
  cout << beefmeat << " ";
  cout << cheese << " ";
  cout << "Pizza" << endl;
}
int main()
{
  string bread = "thicc crust";
  string sauce = "marinara";
  string cheese = "mozzarella";
  string beefmeat = "pepperoli";
  string vegetables = "leb";

  cout << endl << endl;
  bakePizza(bread, vegetables);
  bakePizza(bread, cheese);
  bakePizza(bread, cheese, beefmeat, sauce);

  cout << endl;
  return 0;
}