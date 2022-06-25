#include<iostream>
using namespace std;

int main(){
    int year = 2020;
    double price = 99.25; //
    string model = "Kigali -  Rwanda";
    char status = 'Y';
    bool isSold = false;
    string type = "BMW";
    string engine = "VVTI";

    string car = type + " with engine: " + engine ;


    isSold = true;
    price = price * 0.05;

    cout << "year: " <<year << endl;
    cout <<"price :"<<price << endl;
    cout << "isSold: " <<isSold<< endl;
    cout << "model: "<<model << endl;
    cout << "Availability: "<<status << endl;
    cout << "Car detailes: Model and engine : " +car<<endl;
    
  
}