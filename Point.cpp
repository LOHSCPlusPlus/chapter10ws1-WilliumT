#include "Point.h"
#include <math.h>
#include <iostream>
using namespace std;
// Notice how when we use field names in the functions that
// belong to Point, we can just use the name without a dot operator.
//accessor
//double Point::getX(){
  //return x;
//}
//accesor
//double Point::getY(){
 // return y;
//}
void Point::print(){
  cout << "x: " << x;
  cout << "y: " << y;
  cout << endl;
}

Point::Point(){
  x = 0.0;
  y = 0.0;
  }

Point::Point(double xVal, double yVal) {
    x = xVal;
    y = yVal;
}

double Point::calcDistance(Point other){

  x = other.x;
  y = other.y;
  
  double xVal = pow(x-other.x, 2);
  double yVal = pow(y-other.y, 2);
  double dist = sqrt(xVal+yVal);
  return dist;
}
//mutator
//void Point::setX(double xVal){
 // x = xVal;
//}
//mutator
//void Point::setY(double yVal){
  //y = yVal;
//}