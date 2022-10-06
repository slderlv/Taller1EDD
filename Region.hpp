#include <iostream>
class Region{
  string code;
  int size;
  public:
    Region(string code);
    ~Region();
    string getCode();
    int getSize();
    setSize(int size);
}