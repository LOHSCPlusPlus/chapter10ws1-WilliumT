#include "Line.h"
#include <iostream>
using namespace std;

int main() {
Point x(2,4);
Point y(4,6);
Line line(x,y);
  line.print();
  cout << "The length of this line is: " << line.Linelength();
  cout << endl;
    return 0;
}
