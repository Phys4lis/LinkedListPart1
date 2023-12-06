#include <iostream>

using namespace std;

class student{
 public:
  char firstName[20];
  char lastName[20];
  int ID;
  float GPA;
  student* getStudent();
};
