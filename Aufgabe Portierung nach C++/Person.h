#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED
#pragma once

using namespace std;

class Person{
//Konstruktor_________________________
public:Person(string x, string y);

//Getter Methoden_________________________
string getLastName();

string getFirstName();

//Setter Methoden
void setFirstName(string x);

void setLastName(string x);

//Attribute_________________________
private: string firstname, lastname;
};
#endif // PERSON_H_INCLUDED
