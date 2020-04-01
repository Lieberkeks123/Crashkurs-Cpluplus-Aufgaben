/*Aufgabe: Portierung nach C++
Schreiben Sie das folgende C-Programm in C++ um. Nutzen Sie eine Klasse mit Konstruktor,
privaten Attributen und getter-Methoden, cout statt printf, Methoden statt Funktionen
und std::string statt Zeigern und malloc/free.*/

#include <iostream>
#include "Person.h"
#include "Person.cpp"

using namespace std;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	Person("Michael", " Wendler");
	cout << "Die Person heisst " << endl  << getFirstName() << getLastName();
    //setLastName("Skowronek");
	//setLastName("Skowronek");
	//freePerson(&p);
}
