/*****************************************************************************/
/* Program 3 - Node Class Creation											 */
/*****************************************************************************
    Author: Nathaniel Hoefer
    Student ID: X529U639
    Program: #3
*/

#include "node.hpp"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	cout << "--------------------- Program 3 -----------------------\n" << endl;

	// Creates an array to contain 5 nodes
	Node * bookArray[5];

	// Creates 5 nodes with preset values
	bookArray[0] = new Node("Don Quixote",
			"Miguel de Cervantes", "01/15/1843");
	bookArray[1] = new Node("Tale of Two Cities",
			"Charles Dickens", "11/04/1993");
	bookArray[2] = new Node("The Hobbit",
			"J.R.R. Tolkien", "05/23/2001");
	bookArray[3] = new Node("The Great Divorce",
			"C.S. Lewis", "08/14/1986");
	bookArray[4] = new Node("The Catcher in the Rye",
			"J.D. Salinger", "12/25/2013");

	// Links the nodes using the member variables
	for (int i = 0; i < 4; i++)
	{
		bookArray[i]->setPointer(bookArray[i+1]);
	}

	// Prints the information of a node, then deletes it
	for (int i = 0; i < 5; i++)
	{
		bookArray[i]->ProcessData();
		delete bookArray[i];
	}

	cout << "\nProgram Complete" << endl;

	return 0;
}




