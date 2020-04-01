#include "Person.h"
#include <iostream>

using namespace std;

Person::Person(string x, string y){
    firstname = x;
    lastname = y;
}

void Person::setFirstName(string x){
    firstname = x;
}

void Person::setLastName(string x){
    lastname = x;
}

string Person::getLastName(){
    return lastname;
}

string Person::getFirstName(){
    return firstname;
}
