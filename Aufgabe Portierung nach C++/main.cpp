/*Aufgabe: Portierung nach C++
Schreiben Sie das folgende C-Programm in C++ um. Nutzen Sie eine Klasse mit Konstruktor,
privaten Attributen und getter-Methoden, cout statt printf, Methoden statt Funktionen
und std::string statt Zeigern und malloc/free.*/

#include <iostream>
#inclide Person.h

using namespace std;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	struct Person p;
	initPerson(&p, "Michael", "Wendler");
	setLastName(&p, "Skowronek");
	printf("Die Person heisst %s %s\n", p.firstname, p.lastname);
	freePerson(&p);
}
