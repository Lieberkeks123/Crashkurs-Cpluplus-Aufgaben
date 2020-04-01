#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

class Person{
//Konstruktor_Deklarartion
public Person();

struct Person
{
	char* firstname;
	char* lastname;
};


void initPerson(struct Person* person, char* firstname, char* lastname)
{
	person->firstname = new *char;
	//(char*)malloc(strlen(firstname) + 1);

    strcpy(person->firstname, firstname);
	person ->lastname = (char*)malloc(strlen(lastname) + 1);
	strcpy(person->lastname, lastname);
}

void initPerson(struct Person* person, char* firstname, char* lastname)
{
    person->firstname =






void freePerson(struct Person* person)
{
	if (person->firstname != NULL) free(person->firstname);
	if (person->lastname != NULL) free(person->lastname);
}

void setFirstName(struct Person* person, char* str)
{
	if (person->firstname != NULL) free(person->firstname);
	person->firstname = (char*)malloc(strlen(str) + 1);
	strcpy(person->firstname, str);
}

void setLastName(struct Person* person, char* str)
{
	if (person->lastname != NULL) free(person->lastname);
	person->lastname = (char*)malloc(strlen(str) + 1);
	strcpy(person->lastname, str);
}


}
















#endif // PERSON_H_INCLUDED
