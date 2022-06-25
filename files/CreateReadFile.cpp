#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {

  //create and open a file in txt format
  ofstream myFile("filename.txt");

  //write to the filename
  myFile << "The file was created in C++ using code.";

  //close the file
  myFile.close();


  //create a text string, which is used to output the text file
  string myText;


  //read the file
  ifstream MyReadFile("filename.txt");

  while (getline(MyReadFile, myText)) {
    cout << myText << endl;
  }

  //close the file
  myFile.close();

  return 0;
}