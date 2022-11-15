#include <iostream>
#include "dog.h"
using namespace std;


int main(){
  ostream& operator<<(ostream& out,const Dog& dog);
  Dog * p_dog1 = new Dog("Toby", "Callejero", 25);
  cout<< p_dog1->getName()<<endl;
  cout<< p_dog1->getBreed()<<endl;
  cout<< p_dog1->getAge()<<endl;

  p_dog1->setName("Noki")->setBreed("Fino")->setAge(21);
  cout<< p_dog1->getName()<<endl;
  cout<< p_dog1->getBreed()<<endl;
  cout<< p_dog1->getAge()<<endl;

  p_dog1->set_Name("Pepe").set_Breed("Desertico"); //accediendo por referencia
  cout<< p_dog1->getName()<<endl;
  cout<< p_dog1->getBreed()<<endl;
  delete p_dog1;
}
