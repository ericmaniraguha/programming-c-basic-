#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void withParams(int age, string name){

cout<<"Your name is : "<<name<<endl;
cout<<"Your age is : "<<age<<endl;

}

int main(){

int age;
string name;

cout<<"Enter your name : "<<endl;
getline(cin, name);

cout<<"What is your age? "<<endl;
cin >> age;

withParams(age, name);

cout<<endl;
  return 0;
}