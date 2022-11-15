#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;

class Person {
  private: 
    string name; 
    string last_name;
    unsigned int* age {};

  public: 
    Person() = default;
    Person(string_view , string_view ,unsigned int );

  //GETTERS
    string get_name() const{
      return name;
    } 
    string get_last_name() const {
      return last_name;
    }
    unsigned int get_age() const {
      return *age;
    }
  //SETTERS
    void set_name(const string& name);
    void set_last_name(const string& last_name);
    void set_age(unsigned int age);

  // UTILITIES  
    void print_info() const;
    
};

#endif