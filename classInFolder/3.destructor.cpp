#include <iostream>
#include <string>

using namespace std;

class Dog {
  public : 
    Dog() = default;
    Dog(string_view name_param, string_view breed_param, int age_param);
    ~Dog();
  private : 
    string name;
    string breed;
    int * p_age {nullptr};
};

Dog::Dog(string_view name_param, string_view breed_param, int age_param) {
  name = name_param;
  breed = breed_param;
  p_age = new int();
  *p_age = age_param;
  cout<<"Dog constructor called for : "<<name<<endl;
}

Dog::~Dog() {
  delete p_age;
  cout<<"Dog destructor called for : "<<name<<endl;
}

void some_func() {
  Dog my_other_dog("Naoki","Alto",12);
}

void some_other_func(Dog dog_param) {
}
int main() {
  Dog my_dog("Tobi","Chato", 45);
  // some_func();
  some_other_func(my_dog);
  cout<<"Ending program"<<endl;
}
