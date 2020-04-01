#ifndef SHOPPINGLIST_H_INCLUDED
#define SHOPPINGLIST_H_INCLUDED
#pragma once
#include <string>

using namespace std;

class ShoppingList
{
public:
	ShoppingList();
	~ShoppingList();

	bool empty();//Deklaration

	unsigned int size();//Deklaration

	string item(unsigned int index);//Deklaration

	unsigned int count(unsigned int index);//Deklaration

	void add(string item, unsigned int count = 1);//Deklaration

	//Attributen (Attribut in den Attributen
private:
	struct Entry
	{
		string item;
		unsigned int count;
	};

	unsigned int m_size;
	Entry* m_array;//Pointer
};

#endif // SHOPPINGLIST_H_INCLUDED
