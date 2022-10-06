#include <iostream>
#include "linkedlist.h"
#include "node.h"
#include "region.h"
#include "system.h"

using namespace std;

int main() {
	LinkedList regionList = LinkedList();
	System system = System(regionList);
	system.readFile('file.csv');
	system.print();
	system.delete();
}