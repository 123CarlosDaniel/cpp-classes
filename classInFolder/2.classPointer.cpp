#include <iostream>
#include "constants.h"
#include "cylinder.h"

using namespace std;

int main() {
  // Cylinder cylinder(12,12) ;
  // Cylinder cylinder2; // posible because is defined a default contructor
  Cylinder * cylinder = new Cylinder(4,5);
  Cylinder * cylinder2 = new Cylinder();

  cout<< "Volume cylinder : "<<(*cylinder).volume()<<endl;
  cout<< "Volume cylinder2 : "<<cylinder2->volume()<<endl;
  cylinder2->set_base_radius(4);
  cout << "Radius cylinder2 : "<<cylinder2->get_base_radius()<<endl;
  delete cylinder;
  delete cylinder2;
}