#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

using namespace std;
class Person {
  friend ostream& operator<<(ostream& out, const Person& person);
  public : 
  Person();
  Person(string& first_name_param, string& last_name_param);

  //getters
  string get_first_name() const{
    return first_name;
  }
  string get_last_name() const {
    return last_name;
  }
  private : 
  string first_name{"Mysterious"};
  string last_name{"Person"};
};

#endif