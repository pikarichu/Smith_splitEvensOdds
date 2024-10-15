#pragma once

#include "unorderedLinkedList.h"

class intLinkedList : public unorderedLinkedList<int> {
public:
	void splitEvensOddsList(intLinkedList& evensList,
		intLinkedList& oddsList);
	// Function to rearrange the nodes of the linked list so
	// that evensList consists of even integers and oddsList
	// consists of odd integers.
	// Postcondition: evensList consists of even integers.
	// oddsList consists of odd integers.
	// The original list is empty

	//Evaluate first (maybe last?) int in unorderedList 
	//If even, set node->evensList->last
	//If odd...
	//Remove the nodes from unorderedList as the are sorted into odd/even


private:
	//nodeType<Type> *oddsList;
	//nodeType<Type> *evensList;
};

void intLinkedList::splitEvensOddsList(intLinkedList& evensList,
	intLinkedList& oddsList)
{
	nodeType<int>* current;
	current = this->first;
	while (current != nullptr)
	{
		if (current->info % 2 == 0)
		{
			if (evensList.length() == 0)
			{
				evensList.first = current;
			}
			else
			{
				evensList.last->link = current;
			}
			evensList.last = current;
			evensList.count++;
			current = current->link;
			evensList.last->link = nullptr;

		}
		else
		{
			if (oddsList.length() == 0)
			{
				oddsList.first = current;
			}
			else
			{
				oddsList.last->link = current;
			}
			oddsList.last = current;
			oddsList.count++;
			current = current->link;
			oddsList.last->link = nullptr;
		}
	}
	this->first = nullptr;
	this->last = nullptr;
	this->count = 0;
}