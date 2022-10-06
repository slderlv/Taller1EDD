#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "node.h"

class LinkedList{
  Node* first;
  public:
    LinkedList();
    ~LinkedList();
    void add(Region region);
    void sum(Node* node);
    void sort();
    Node* exists(std::string code);
}
#endif