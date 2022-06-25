#include<iostream>
#include<string>
#include<algorithm>
#include <cmath>

using namespace std;
int main(){

double x ;
double y ;

cout<<"Enter 1st number: "<<endl;
cin>>x;
cout<<"Enter 2nd number: "<<endl;
cin>>y;
double z = max(x,y);
double m = min(x,y);
double p = pow(x, y);


cout<<"The maximum number is : "<<z<<endl;
cout<<"The minimum number is : "<<m<<endl;
cout<<"Return x^y: "<<p<<endl;

cout<<endl;
  return 0;
}