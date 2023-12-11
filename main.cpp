/* This program is the first part of a student list program that uses linked lists.
 * Date: 12/11/23
 * Author: Roger Li
 */


#include <iostream>
#include "node.h"
#include "student.h"


using namespace std;

int main() {
  // Testing


  
  // Creating students and assigning GPAs
  Student* firstStudent;
  Student* secondStudent;
  firstStudent->GPA = 4.00;
  secondStudent->GPA = 4.40;

  // Creating nodes with their corresponding students (check that the constructor works)
  Node* firstNode = new Node(firstStudent);
  Node* secondNode = new Node(secondStudent);

  // Set the next node to be secondNode (check that setNext() works)
  firstNode->setNext(secondNode);

  // Print out the students' GPA (check that getStudent() works)
  cout << "First student's GPA: " << firstNode->getStudent()->getGPA() << endl;
  cout << "Second student's GPA: " << secondNode->getStudent()->getGPA() << endl;

  // If the next node is secondNode, print out a statement saying so (check that getNext() works)
  if ((firstNode->getNext()) == secondNode) {
    cout << "The next node after firstNode is secondNode" << endl;
  }
}
