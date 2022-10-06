#include <iostream>
#include "Region.hpp"

Region::Region(string code){
  this->code = code;
}
string Region::getCode(){
  return code;
}
int Region::getSize(){
  return size;
}
void Region::setSize(int size){
  this->size = size;
}
