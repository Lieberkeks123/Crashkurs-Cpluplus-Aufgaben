#include <iostream>
#include "shoppinglist.h"

using namespace std;

//Konstruktor
ShoppingList::ShoppingList(){
    m_size = 0;
    m_array = NULL;
}

//Destruktor
ShoppingList::~ShoppingList()
{
	if (m_size > 0) delete [] m_array;
}

//Guckt ob die Liste leer ist.
bool ShoppingList::empty(){
    return m_size == 0;
}

//Gibt Größe der Liste zurück.
unsigned int ShoppingList::size(){
    return m_size;
}

//Gibt Element an der jeweiligen stelle (Index) der Liste aus
string ShoppingList::item(unsigned int index){
    return m_array[index].item;
}

//Anzahl des Element in der Liste.
unsigned int ShoppingList::count(unsigned int index){
    return m_array[index].count;
}

//Elemente werden zur Liste hinzugefügt
void ShoppingList::add(string item, unsigned int count)
{
	for (unsigned int i=0; i<m_size; i++)
	{
		if (m_array[i].item == item)
		{
			m_array[i].count += count;
			return;
		}
	}
	Entry* newarray = new Entry[m_size + 1];//Erstellt neuen Array Entry

	for (unsigned int i=0; i<m_size; i++)
        newarray[i] = m_array[i];

	newarray[m_size].item = item;
	newarray[m_size].count = count;
	if (m_size > 0)
        delete [] m_array;//Löscht neuen Array Entry
	m_size++;
	m_array = newarray;
}
