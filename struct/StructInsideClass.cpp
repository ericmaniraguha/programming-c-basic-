#include<iostream>
using namespace std;
using namespace std;

class Univeristy {
public:
  struct {
    string lecture;
    string modules;
    string moduleCode;
    string studentName;
    string studentId;
    int year;

  } st1, st2, st3, st4;

public:
  void student1() {
    st1.year = 2022;
    st1.studentName = "Mr. Orlando Omega";
    st1.studentId = "ST-1201";
    st1.moduleCode = "MD-IT-785";
    st1.lecture = "Onyango Kamalay";
    st1.modules = "Innovations in ICT";
  }
};

int main() {

  Univeristy* c = new Univeristy();
  c->student1();

  cout << "Memory location is : " << endl;
  cout << "---------------------Student informations----------------- : " << endl;
  cout << "StudentID " << c->st1.studentId << endl;
  cout << "StduentName " << c->st1.studentName << endl;
  cout << "Lecturer " << c->st1.lecture << endl;
  cout << "Year " << c->st1.year << endl;
  cout << "Module " << c->st1.moduleCode << endl;
  cout << "Module " << c->st1.modules << endl;


  cout << endl;
  return 0;
}