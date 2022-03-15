#include "Rectangle.h"

rectangle::rectangle(Line l, Line h){
length = l;
height = h;
}

void rectangle::print(){
  length.print();
  height.print();
}

double rectangle::CalcArea(){
  double area = 0;
  area = length.Linelength() * height.Linelength();
  return area;
}