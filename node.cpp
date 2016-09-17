/*****************************************************************************/
/* Program 3 - Node Class Creation											 */
/*****************************************************************************
    Author: Nathaniel Hoefer
    Student ID: X529U639
    Program: #3
*/
#include "node.hpp"

#include <iostream>
#include <string>

using namespace std;

/*****************************************************************************/
// Class Source Functions
/*****************************************************************************/


// CONSTRUCTORS ***************************************************************


Node::Node()
{
	mBookTitle = "Title";
	mAuthor = "Author";
	mDataRead = "01/01/1900";
	mNextNode = NULL;
}


Node::Node(string title, string author, string date)
{
	mBookTitle = title;
	mAuthor = author;
	mDataRead = date;
	mNextNode = NULL;
}



// METHODS ********************************************************************


int Node::CompareData(string title)
{
	return mBookTitle.compare(title);
}


/*****************************************************************************/


void Node::ProcessData()
{

	// Prints node info to screen
	cout << mBookTitle << ", " << mAuthor << ", " << mDataRead << endl;
}
