#ifndef CYLINDER_H
#define CYLINDER_H

#include "constants.h"

class Cylinder {
  public : 
  // constructors
    Cylinder() {
      base_radius = 4;
      height = 5 ; 
    }
    // Cylinder() = default;

    Cylinder(double radius_param, double height_param );

  // methods
    double volume();   
  // getters
    double get_base_radius();
  // setters
    void set_base_radius(double radius_p);
  private :
  // member variables
    double base_radius {1}, height{1};

};
#endif