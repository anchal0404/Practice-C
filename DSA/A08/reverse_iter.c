#include "sll.h"

/* Function to reverse the given single linked list */
int reverse_iter(Slist **head) 
{ 
	if(*head == NULL)
		return LIST_EMPTY;// Return failure if the list is empty
	Slist*prev = NULL , *current = *head,*next = NULL;// Initialize pointers for previous, current, and next nodes
	while(current)
	{
		next = current ->link;// Save the next node
		current ->link = prev // Reverse the link to the previous node
		current = next;// Move pointers one step forward
	}
	*head = prev;// Update the head to point to the new first node (previously the last node)
	return SUCCESS; // Return success after successfully reversing the list

} 