#include<iostream>
#include<string>
using namespace std;

int main(){

  int temperature;

cout<<"Please, enter the temperature.";
cin>>temperature;

if(temperature >= 30){
  cout<<"Please, Weather is HOT /";

}else if(temperature <= 10){
   cout<<"Please, Weather is COLD /";
}else{
   cout<<"Please, Normal Weather. /";
}


  return 0;
}