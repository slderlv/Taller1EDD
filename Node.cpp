#include "Node.hpp"

Node::Node(Region region){
  this->region = region;
  next = nullptr;
}
Node* Node::getNext(){
  return next;
}
void Node::setNext(Node* next){
  this->next = next;
}
Region Node::getRegion(){
  return region;
}