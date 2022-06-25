#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void welcom(){

  cout<<"Welcome my World."<<endl;
}
void goodbye(string name){
  cout<<"Good bye My world. " +name<<endl;}

int main(){

welcom();
goodbye("Mr. Kamanzi");

cout<<endl;
  return 0;
}