#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

using namespace std;

class Person
{
public:
    //Konstruktor
	Person(string x, string y){
        firstname = x;
        lastname = y;
	}

    //Getter Methoden
	string GetFirstName(){
	    return firstname;
	}

	string  GetLastName()
	{ return lastname; }

    //Setter Methoden
	void setFirstName(string x){
	    firstname = x;
    }

	void setLastName(string x){
	    lastname = x;
    }

    //Atrribute
private:
	string firstname;
	string lastname;
};

#endif // PERSON_H_INCLUDED
