#include "Person.h"
#include <string>
using namespace std;

Person::Person(string first_name) : Person(first_name, "")  {}
Person::Person(string first_name, string last_name) 
  :Person(first_name, last_name, 0) {}
Person::Person(string first_name, string last_name, int age) 
  : last_name(last_name),
    first_name(first_name),
    age(new int(age)) {}

Person::~Person() {
  delete age;
}

Person::Person(const Person& source_p) 
  : Person(source_p.get_first_name(),source_p.get_last_name(), source_p.get_age())
{
  cout<<"Copy constructor called"<<endl;
}