//============================================================================
// Name        : LinkedList.cpp
// Author      : Youssefmyh@gmail.com
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

/*
 * List Item
 * contain your data item
 * and Link for Next item
 * */
struct Link
{
	int data;
	Link*next;

};

/*
 * Linked List Class
 * Link First and this the first null value and
 * you must initialize it with Null because you check for this NULL value in display
 * method
 * */
class LinkedList
{
private :
	Link *first;
public :
	LinkedList():first(NULL){}
	void addItem(int data);
	void display();


~LinkedList()
{
	Link *_cu = first->next;

	while(_cu!=NULL)
	{
	first->next = _cu->next;
	_cu->next = NULL;
	delete _cu;
	_cu = first->next;


	}
	cout<<"Deleted";

}

};

/*
 *add int Item to your List
 * */
void LinkedList::addItem(int item)
{
	Link *link =new Link();
	link->data=item;
	link->next=first;
	first=link;
}

/*
 * display Linked List Content
 * added by Main Method
 * */

void LinkedList::display()
{
	Link *current=first;
	while(current!=NULL)
	{
		std::cout<<"Data  : " <<current->data<<endl;
		current=current->next;
	}

}



int main(void)
{
	LinkedList *_linkedList=new LinkedList();
	_linkedList->addItem(23);
	_linkedList->addItem(24);
	_linkedList->addItem(25);
	_linkedList->addItem(26);
	_linkedList->addItem(27);

	_linkedList->display();

	delete _linkedList;

	return EXIT_SUCCESS;
}
