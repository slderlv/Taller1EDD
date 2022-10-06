#include "LinkedList.hpp"

LinkedList::LinkedList(){
  first = nullptr;
}
void LinkedList::add(Region region){
  Node* node = new Node(region);
  node->setNext(first);
  first = node;
}
void LinkedList::sum(Node* node){
  Region region = node->getRegion();
  region.setSize(region.getSize()+1);
}
Node* LinkedList::exists(std::string code){
  Node* actual = first;
  while(actual!=nullptr){
    if (actual->getRegion().getCode()==code) return actual;
    actual = actual->getNext();
  }
  return nullptr;
}