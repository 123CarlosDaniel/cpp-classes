#include <iostream>
#include "Person.h"

using namespace std;
int main() {
  Person person("Jhon","Doe", 45);
  person.print_info();
  Person person2(person);
  person2.print_info();
  cout<<"-------------------------------------------------------------------"<<endl;
  person.set_age(60);
  person.print_info();
  person2.print_info();
}