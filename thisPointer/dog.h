#ifndef DOG_H
#define DOG_H

#include <string>

using namespace std;

class Dog
{
private:
  string name;
  string breed;
  int age; 
public:
  Dog(string_view name, string_view breed, int age);
  Dog * setName(string_view name);
  Dog * setBreed(string_view breed); 
  Dog * setAge(int age);

  Dog& set_Name(string_view name); //reference
  Dog& set_Breed(string_view name);

  string getName();
  string getBreed();
  int getAge();
};

#endif 