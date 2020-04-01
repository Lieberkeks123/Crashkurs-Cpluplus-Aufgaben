#include <string>
#include <iostream>
#include "Person.h"

using namespace std;

int main()
{
	Person p("Michael", "Wendler");
    cout << "Die Person heisst " << p.GetFirstName() << " " << p.GetLastName() << endl;
	p.setLastName("Skowronek");
	cout << "Die Person heisst " << p.GetFirstName() << " " << p.GetLastName() << endl;
}
