#include "point.h"
#include <cmath>

Point::Point(double x, double y) 
  : m_x{x}, m_y{y} {
    ++m_point_counter;
  }

Point::Point(double xy) 
  : Point(xy,xy) {}

Point::Point(): Point(0,0) {}

Point::Point(const Point& p) 
  : Point{p.m_x,p.m_y} {}

Point::~Point() {
  --m_point_counter;
}

double Point::lenght() {
  return sqrt(pow(m_x,2)+ pow(m_y,2));
}