#include "person.h"

using namespace std;

Person::Person(){
}

Person::Person(string& first_name_param, string& last_name_param)
    : first_name(first_name_param), last_name(last_name_param)
{
}

ostream& operator<<(ostream& out, Person& person){
  out<<"Person [ "<<person.get_first_name()<<" "<<person.get_last_name()<<" ]"<<endl;
  return out;
}