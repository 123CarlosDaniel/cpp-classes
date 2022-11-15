#include "dog.h"

Dog::Dog(string_view name, string_view breed, int age){
  this->name = name;
  this->breed = breed;
  this->age = age;
}

Dog * Dog::setName(string_view name){
  this->name = name;
  return this;
}

Dog * Dog::setBreed(string_view breed){
  this->breed = breed;
  return this;
}

Dog * Dog::setAge(int age) {
  this->age = age;
  return this;
}

Dog& Dog::set_Name(string_view name){
  this->name = name;
  return *this;
}

Dog& Dog::set_Breed(string_view breed){
  this->breed = breed;
  return *this;
}
string Dog::getName(){
  return this->name;
}

string Dog::getBreed(){
  return this->breed;
}

int Dog::getAge(){
  return age;
}
