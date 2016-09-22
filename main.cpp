/*****************************************************************************/
/* Program 3 - Node Class Creation											 */
/*****************************************************************************
    Author: Nathaniel Hoefer
    Student ID: X529U639
    Program: #3


Description of the Problem:
	This program is going to define a preparatory class that you will be using
	for linked list.  You are going to write this class and use it so that you
	will be ready to use it for the linked list class.  The class is going to
	be the Node class.


Main Function:
	Creates 5 nodes with misc. book info, links them together, then prints them
	to the screen.

	Input Parms: None
	Output Parms: Node info is printed to screen
	> Create array of books as node pointers
	> Assign values to each of the book nodes in the array
	> Set the next pointer value of each node to the next node's pointer
	> Compares the title of each node to the next node
	> Print and delete each node
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

	// Links the nodes using the member variables and compares the titles
	// of the next node.
	for (int i = 0; i < 4; i++)
	{
		bookArray[i]->setPointer(bookArray[i+1]);

		// Prints the current node title and author
		cout << "The book " << bookArray[i]->getBookTitle() << ", by " <<
				bookArray[i]->getAuthor() << " is ordered ";

		// Compares the values of the title
		int x = bookArray[i]->CompareData(bookArray[i+1]->getBookTitle());

		// Translates the compare value to the correct output
		if (x > 0)
			cout << "after ";
		else if (x < 0)
			cout << "before ";
		else
			cout << "equal to ";


		// Prints the next node title and author
		cout << bookArray[i+1]->getBookTitle() << ", by " <<
				bookArray[i+1]->getAuthor() << "." << endl;
	}

	cout << "\n";

	// Prints the information of a node, then deletes it
	for (int i = 0; i < 5; i++)
	{
		bookArray[i]->ProcessData();
		delete bookArray[i];
	}

	cout << "\nProgram Complete" << endl;

	return 0;
}




