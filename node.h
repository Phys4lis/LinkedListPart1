#ifndef NODE_H
#define NODE_H
#include <iostream>

using namespace std;

class node{
 public:
  node* getNext();
  void setNext(node* n);
 private:
  node* next;
  student* student;

};
#endif
