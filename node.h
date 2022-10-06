#ifndef NODE_H
#define NODE_H
#include "region.h"

class Node{
  Node* next;
  Region region;
  public:
    Node(Region region);
    ~Node();
    Region getRegion();
    Node* getNext();
    setNext(Node* next);
}
#endif