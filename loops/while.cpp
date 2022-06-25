#include<iostream>
#include<string>
using namespace std;

int main(){

string name;


while(name.empty()){

  cout<<"Enter yo name, please : ";
  getline(cin, name);
}
cout<<"Welcome Mr. "<<name;

cout<<endl;
  return 0;
}
