#include <iostream>

using namespace std;

const double PI {3.1415926};

class Cylinder {
  public : 
  // constructors
    Cylinder() {
      base_radius = 4;
      height = 5 ; 
    }
    // Cylinder() = default;

    Cylinder(double radius_param, double height_param ) {
      base_radius = radius_param;
      height = height_param;
    }

  // methods
    double volume(){
      return PI * base_radius * base_radius * height;
    }

  // getters
    double get_base_radius(){
      return base_radius;
    }
  // setters
    void set_base_radius(double radius_p){
      base_radius = radius_p;
    }

  private :
  // member variables
    double base_radius {1}, height{1};

};

int main() {
  Cylinder cylinder(12,12) ;
  Cylinder cylinder2; // posible because is defined a default contructor
  cout<< "Volume cylinder : "<<cylinder.volume()<<endl;
  cout<< "Volume cylinder2 : "<<cylinder2.volume()<<endl;
  cylinder2.set_base_radius(4);
  cout << "Radius cylinder2 : "<<cylinder2.get_base_radius()<<endl;
}