#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>

using namespace std;
class Person {
  private : 
    string first_name;
    string last_name;
    int * age{};
  
  public :
    Person() = default; 
    Person(string , string, int );
    Person(string, string);
    Person(string);
    Person(const Person&);
    ~Person();

  // SETTERS    
    void set_first_name(const string_view& name){
      first_name = name ; 
    }
    void set_last_name(const string_view& last_name){ this->last_name = last_name ;}
    void set_age(int age) { *(this->age) = age;}

  // GETTERS
    const string& get_first_name() const { return first_name;}
    const string& get_last_name() const{ return last_name;}
    int get_age() const { return *(age);}
  //UTILITIES
    void print_info(){
	  	cout<< "Person object at : " << this 
			<<" [ Last_name : " << last_name 
			<< ", First_name :  " << first_name 
			<< " ,age : " << *age 
			<< " , age address : " << age 
			<< " ]" << endl;
    } 
  
};

#endif