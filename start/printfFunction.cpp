#include<iostream>
#include<string>
using namespace std;

int main(){

  //printf

  string make =  "Ford"; 
  string model = "Mutsang";
  int year =2022;
  double price = 999.25333;
  char for_char ='Y';

  printf("You car is made by : %s, the model is : %s,", "Ford", "Mutsang"); cout << endl;
  printf("You car is made by : %s and model is : %s", make.c_str(), model.c_str());

  printf("The year is : %d", year);
    printf("The price is : %d Made year is : $%.2f, is it ok ? %c",  year,price, for_char);
       printf("Add Spacing before printout : %10d", year);
    printf("Add Spacing before printout and add zeros : %010d", year);
      printf("Add Spacing before printout and add zeros : %-10s%-10s", "Ford", "BMW");
   
 



cout<<endl;
  return 0;
}