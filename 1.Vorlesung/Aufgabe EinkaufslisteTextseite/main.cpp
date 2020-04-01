#include "shoppinglist.h"
#include <iostream>

int main()
{
	ShoppingList list;
	list.add("tomato", 10);
	list.add("milk", 3);
	list.add("bread", 1);
	list.add("milk", 1);
	list.add("butter", 1);
	list.add("tomato", 10);

	cout << "shopping list:" << endl;
	for (unsigned int i=0; i<list.size(); i++)
	{
		cout << list.count(i) << "x " << list.item(i) << endl;
	}
}
