#ifndef NODE_H
#define NODE_H

#include <iostream>
#include "student.h"

using namespace std;

class node{
 public:
  node(student*);
  // Destructor
  ~node();
  // Getters
  node* getNext();
  student* getStudent();
  // Setters
  void setNext(node* n);
  
 private:
  // Variables
  node* next;
  student* student;
};
#endif
