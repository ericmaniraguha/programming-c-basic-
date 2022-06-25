#include <iostream>
#include <string.h>

using namespace std;

int main (){
string firstName;

cout<<"Enter your first name: ";
getline(cin, firstName);

string usingInsert = firstName.insert(0, "##");

string substr =  firstName.substr(0,6);



int len = firstName.length();

if(firstName.empty()){
  cout<<"You did not enter any name. ";
}
  else{
    cout<<"You are welcome to our services. Mr./Mrs./Ms. "+ firstName<<endl;
    cout<<"The Substring is : "+substr<<endl;
    cout<<"Insert Function is : "+usingInsert<<endl;

    cout<<"*Your name has been cleared*"<<endl;
    firstName.clear();
    cout<<"Welcome again "<<firstName<<endl;
  }

cout<<endl;
  return 0;
}