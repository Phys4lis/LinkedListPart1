#include <iostream>
#include "node.h"

using namespace std;

node::node() {
  next = NULL;
  student = NULL;
}

node* node::getNext() {
  return next;
}

void node::setNext(node* n) {
  next = n;
}
