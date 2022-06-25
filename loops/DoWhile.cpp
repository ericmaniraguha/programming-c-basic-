#include<iostream>
#include<string>

using namespace std;

int main(){

string answer;

do{
cout<<"You are playing this game.";
cout<<"* pew pew";
cout<<"Press q to quit"<<endl;
getline(cin, answer);

cout<<"===========================";

}while(answer.at(0)!='q' && answer.at(0)!='Q' );

cout<<endl;
  return 0;
}