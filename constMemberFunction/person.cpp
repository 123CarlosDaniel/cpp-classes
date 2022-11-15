#include "person.h"
#include <iostream>
#include <string>

using namespace std;

Person::Person( string_view name, string_view last_name, unsigned int age) {
  this->name = name;
  this->last_name = last_name;
  this->age = new unsigned int(age);
}

void Person::set_name(const string& name) {
  this->name = name;
}
void Person::set_last_name(const string& last_name) {
  this->last_name = last_name;
}
void Person::set_age(unsigned int age) {
  *(this->age) = age;
}

void Person::print_info() const {
  cout<< "Person object at : " << this 
  <<" [ Last_name : " << last_name 
  << ", First_name :  " << name 
  << " ,age : " << *age 
  << " , age address : " << age 
  << " ]" << endl;
}