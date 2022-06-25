#include<iostream>
#include<string>

using namespace std;

int main(){

string name;
string firstname;
string middlename;

cout<<"Enter your names: "<<name<<endl;
getline(cin, name);

cout<<"Enter your firstName"<<firstname<<endl;
getline(cin, firstname);

cout<<"Enter your middleName"<<middlename<<endl;
getline(cin, middlename);

char letter1 = firstname.at(0);
char letter2 = middlename.at(0);
char letter3 = name.at(0);



string email = (name.append("@gmail.com"));





int leng =  name.length();
if(leng==0){
  cout<<"You have not entered any names."<<endl;
}else{
  cout<<"Your email is " +email<<endl;
  cout<<"Your initial name is : "<<letter1<<letter2<<letter3<<endl;

  cout<<"Welcome " +name<<endl;

}

cout<<endl;
  return 0;
}