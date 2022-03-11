#include "Line.h"
#include <iostream>
using namespace std;

Line::Line(Point S, Point E) {

start = S;
end = E;

}



// This is new


void Line::print(){
  
cout << " Start";

start.print();

cout << " End";

start.print();

cout << endl;

}

double Line::Linelength(){
  return start.calcdistance(end);
}