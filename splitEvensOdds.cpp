// splitEvensOdds.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "intLinkedList.h"
#include "linkedList.h"
using namespace std;



int input;

int main()
{

	intLinkedList list, evens, odds;
	/*for (int i = 0; i < sizeof(values); i++)
	{
		//nodeType<int> *newNode;
		list.insertLast(values[i]);

	}*/
	cout << "Enter integers ending with -999" << endl;
	while (input != -999)
	{
		//cout << "Enter integers ending with -999" << endl;
		cin >> input;
		if (input != -999)
		{
			list.insertLast(input);
		}
		//cout << endl;
	}
	linkedListIterator<int> test;
	test = list.begin();
	cout << "list: ";
	for (test; test != list.end(); ++test)
	{
		cout << *test << " ";
	}
	cout << endl;
	list.splitEvensOddsList(evens, odds);

	//linkedListIterator<int> temp = evens.begin();

	test = evens.begin();
	cout << "evensList: ";
	for (test; test != evens.end(); ++test)
	{
		cout << *test << " ";
	}


	cout << endl;
	test = odds.begin();
	cout << "oddsList: ";
	for (test; test != odds.end(); ++test)
	{
		cout << *test << " ";
	}
	cout << endl;
	
}