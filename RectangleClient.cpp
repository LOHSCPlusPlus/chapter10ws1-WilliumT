#include "Rectangle.h"
#include <iostream>
using namespace std;
int main() {
  Point x(2,4);
Point y(4,6);
Line height(x,y);
  Point a(6,8);
Point b(8,10);
Line length(a,b);
rectangle c (length, height);
  c.print();
  cout << "Your Rectangle area is: ";
  cout << c.CalcArea() << endl;
    return 0;
}
