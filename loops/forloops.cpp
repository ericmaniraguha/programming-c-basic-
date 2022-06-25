#include<iostream>
#include<string>
using namespace std;

int main(){
  
string word;

cout<<"Enter the word to spell : ";
cin >> word;

for(int i = 0; i < word.size(); i++)
{
  cout<<word.at(i)<<" ";
}  cout<<endl;
  return 0;
}