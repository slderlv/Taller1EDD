#include "system.h"
#include "node.h"
#include "linkedlist.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string.h>

System::System(Linkedlist list){
	this->list = list;
}
System::~System(){}
void System::readFile(std::string fileName){
	ifstream myFileStream(fileName);
	std::string code;
	std::string line;
	
	getline(myFileStream,line);
	while(getline(myFileStream,line)){
		stringstream ss(line);
		getline(ss,code,';');

        Node* node = list.exists(code);
        if (node != nullptr){
            list.sum(node);
        } else {
            Region region = Region(code);
            list.add(region);
        }
	}	
	myFileStream.close();
}
void print();
