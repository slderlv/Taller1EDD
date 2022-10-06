#include "linkedList.h"
#include "region.h"
#include "node.h"


LinkedList::LinkedList(){
  first = nullptr;
}

Node* LinkedList::getFirst(){
	return first;
}

void LinkedList::add(Region* region){
  Node* node = new Node(region);
  node->setNext(first);
  first = node;
}
void LinkedList::sum(Node* node){
	node->getRegion()->setSize(node->getRegion()->getSize()+1);
	//std::cout << region.getSize() << std::endl;
}
Node* LinkedList::exists(std::string code){
  Node* actual = first;
  while(actual!=nullptr){
    if (actual->getRegion()->getCode()==code) return actual;
    actual = actual->getNext();
  }
  return nullptr;

}

LinkedList::~LinkedList(){

}
