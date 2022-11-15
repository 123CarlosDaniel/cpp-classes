#include <iostream>
#include "point.h"
using namespace std;

size_t Point::m_point_counter{0};

int main(){
  Point p(4,3);
  Point p2[] {Point(1,6),Point(5,10),Point(1,8)};
  Point p3(1,2);
  cout<<"lenght p : "<<p.lenght()<<endl;
  cout<<"lenght p3 : "<<p3.lenght()<<endl;
  cout<<"number of Point elements : "<<p.getPointCount()<<endl;
}