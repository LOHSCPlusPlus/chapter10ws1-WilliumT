#include "Line.h"
class rectangle{

public:
rectangle(Line length, Line height);
void print();
double CalcArea();
private: 
Line length;
Line height;
};