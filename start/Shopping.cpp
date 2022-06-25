#include<iostream>
#include<string>
using namespace std;

int main(){
  string item;
  double price;
  int quantity;
  double total;

  cout<<"What item do you want to buy? ";
  getline(cin, item);
  cout<<"What is the price for each$? ";
  cin>>price;
  
  cout<<"How many do you want buy? ";
  cin>>quantity;
  cout<<endl;
  total = price * quantity;

  cout<<"You have to pay : "<<total;
  cout<<endl; 

  return 0;
}

