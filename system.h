#ifndef SYSTEM_H
#define SYSTEM_H
#include "linkedlist.h"
#include <iostream>
class System {
	private:
		Linkedlist list;
	public:
		System(Linkedlist list);
		~System();
		void readFile(std::string fileName);
		void print();
		void delete();
};

#endif