#include "Node.hpp"

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