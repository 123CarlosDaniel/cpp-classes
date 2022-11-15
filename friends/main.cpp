#include <iostream>
#include <string>

using namespace std;

class Dog{
  friend void debug_dog_info(const Dog& d);
  friend void debug_dog_info();
  private :
    string name;
    int age;  

  public : 
    Dog(const string& name , int age) 
      : name{name} , age{age} 
    {}
};

void debug_dog_info(const Dog& d) {
  std::cout << "Dog [ name : " << d.name<< ", age : " << d.age<< "]" << std::endl;
}

void debug_dog_info(){
    Dog dog1("Milou",3);
    dog1.name= "Fluffy";
    cout << "Dog [ name : " << dog1.name<< ", age : " << dog1.age<< "]" << std::endl;

}

int main() {
  Dog dog1("Fluffy",4);
  debug_dog_info();
  debug_dog_info(dog1);
}