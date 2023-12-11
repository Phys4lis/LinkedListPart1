#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

using namespace std;

class student{
 public:
  char firstName[20];
  char lastName[20];
  int ID;
  float GPA;
  char* getFirstName();
  char* getLastName();
  int getID();
  float getGPA();
};
#endif
