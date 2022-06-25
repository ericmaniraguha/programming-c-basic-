#include<iostream>
#include<string>
using namespace std;

int main(){
   string name;
   int age;
 
   cout<<"Please, provide your name : ";
  //  cin >> name;// does not accept text with white spaces.
  getline(cin, name);

    cout<<"Your age : ";
   cin >> age;
   cout<<"Your name is : "<<name + ", your age : " << age << endl;


  return 0;
}