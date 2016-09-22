/*****************************************************************************/
/* Program 3 - Node Class Creation											 */
/*****************************************************************************
    Author: Nathaniel Hoefer
    Student ID: X529U639
    Program: #3


Class Name: Node
	The inventory class contains only the members associated with the inventory
	which are part number, item, quantity, price, and total cost.

Data:
	- (string) mBookTitle: The title of a book
	- (string) mAuthor: The author of the book
	- (string) mDateRead: contains numerical value of the date in the
		format of MM/DD/YYYY
	- (Node) *mNextNode: Pointer to next node in list

Constructors:
	+ Node() - Sets the value to default
	+ Node(string title, string author, string date): creates node with the
		arguments passed
		Input Parms: the format of the date must be MM/DD/YYYY

Mutator Functions:
	+ setPointer

Accessor Functions:
	+ getPointer
	+ getBookTitle
	+ getAuthor

Functions:
	+ CompareData(string title) - compare a given book title against the
		one in the class.

		Input Parms: string title - The title to be compared
		Output Parms: returns numeric value depending on the
			lexigraphic ordering
		Returns: (int) -1 if title < mBookTitle, 0 if title == mBookTitle,
			1 if title > mBookTitle.
		> Compare string and return value based on result

	+ ProcessData() - Print the data to the screen

		Input Parms: None
		Output Parms: Data printed to screen
		> Format Date
		> Print title
		> Print author
		> Print formatted date

*/
#include <string>

using namespace std;

#ifndef NODE_HPP_
#define NODE_HPP_

class Node
{
	private:

// Member Variables

	// The title of a book
	string mBookTitle;

	// The author of the book
	string mAuthor;

	// contains numerical value of the date in the format of MMDDYYYY
	string mDataRead;

	// Pointer to next node in list
	Node *mNextNode;


	public:

// Constructors
	Node();
	Node(string title, string author, string date);


// Mutator and Accessor Functions
	void setPointer(Node *prt) { mNextNode = prt; };
	Node * getPointer() { return mNextNode; };
	string getBookTitle() { return mBookTitle; };
	string getAuthor() { return	mAuthor; };


// Member Functions

//	Compare a given book title against the one in the class.
//	- Input Parms: string title - The title to be compared
//	- Output Parms: returns numeric value depending on the lexigraphic ordering
//	- Returns: (int) -1 if title < mBookTitle, 0 if title == mBookTitle,
//		1 if title > mBookTitle.
	int CompareData(string title);

//	Print the data to the screen
//	- Input Parms: None
//	- Output Parms: Data printed to screen
	void ProcessData();


};

#endif /* NODE_HPP_ */
