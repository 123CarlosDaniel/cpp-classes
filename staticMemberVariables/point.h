#ifndef POINT_H
#define POINT_H

#include <iostream>

class Point {
public :
  Point(double x, double y);
  Point(double xy);
  Point();
  Point(const Point& p);

  size_t getPointCount() const {
    return m_point_counter;
  }

  void print_info() const {
    std::cout << "Point  [ &m_x : " << &m_x << ", &m_y : " << &m_y << "]" << std::endl;
  }

  double lenght();
  ~Point();
private :
  double m_x;
  double m_y;
  static size_t m_point_counter;
};

#endif