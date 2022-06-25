#include <iostream>
#include<string>

using namespace std;

int main(){
   string fname;
   string lname;
   int position;
   string phoneNumber;

   
   
   cout<<"Enter your firstname: ";
   getline(cin, fname);

  cout<<"Enter your phone number with code: ";
   getline(cin, phoneNumber);

string erasedPhoneNumber = phoneNumber.erase(0,4);

   string substring;
   cout<<"Which characte you want to search: ";
   getline(cin, substring);
   position = fname.find(substring);

   cout<<"Found charcater/s at pisition: "<<position <<endl;

   cout<<"Your really phone number is : "<<erasedPhoneNumber<<endl;
  return 0;
}
