#include <iostream>
#include "node.h"


using namespace std;

// Constructor
node::node(student* newStudent) {
  student = newStudent;
  next = NULL;
}

// Destructor
node::~node() {
  delete student;
  next = NULL;
}

// Getters
node* node::getNext() {
  return next;
}

student* node::getStudent() {
  return student;
}

// Setters
void node::setNext(node* n) {
  next = n;
}
