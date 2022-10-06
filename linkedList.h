#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "node.h"
#include "region.h"

class LinkedList{
  Node* first;
  public:
    Node* getFirst();
    LinkedList();
    ~LinkedList();
    void add(Region* region);
    void sum(Node* node);
    void sort();
    Node* exists(std::string code);
};
#endif
