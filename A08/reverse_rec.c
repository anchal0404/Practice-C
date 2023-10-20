#include "sll.h"

// Function to reverse a singly linked list using recursion
int reverse_recursion(Slist ** head)
{
	// Check if the list is empty
	if(*head == NULL)
		return LIST_EMPTY;

	// Static variables to maintain the state across recursive calls
	static Slist* prev = NULL,*current,*next;
	
	// Initialize current pointer to the head of the list
	current = *head;

	// Save the next node to avoid losing the link
	next = current->link;

	// Reverse the link of the current node
	current->link = prev;

		// Move the pointers to the next nodes
	prev = current;
	current = next;

	// If there are more nodes, make a recursive call
	if(current != NULL)
		reverse_recursion(&current);
	
	// Update the head to the new start of the reversed list
	*head = prev;
		// Return success
	return SUCCESS;

}