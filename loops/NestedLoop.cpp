#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
  
//nested loop
char symbol[10];
int width = 0;
int height = 0;

cout<<"Enter the Symbol to use : ";
cin>>symbol;

cout<<"Enter the Width to use : ";
cin>>width;

cout<<"Enter the Height to use : ";
cin>>height;

for(int i=0; i<height; i++){
  for(int j=0; j<width; j++){
    cout<<symbol;
  }
  cout<<endl;
}
 cout<<endl;
  return 0;
}