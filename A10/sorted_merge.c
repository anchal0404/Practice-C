#include "sll.h"

/* Function to merge two sorted linked lists in ascending order */
int sorted_merge( Slist **head1, Slist **head2)
{
	// Check if both lists are empty
	if(*head1 ==NULL && *head2 == NULL)
		return FAILURE;// Return FAILURE if both lists are empty
	
	// If the first list is empty, simply point it to the second list
	else if (*head1 == NULL)
	{
		*head1 = *head2;
	}
	else
	{
		// Traverse the first list to find the last node
		Slist* temp = *head1;
		while(temp->link)
		{
			temp= temp->link;
		}
		// Connect the last node of the first list to the head of the second list
		temp->link = *head2;
	}
	// If the merged list has only one element, no need to sort
	if((*head1)->link == NULL)
		return SUCCESS;
	// Sort the merged list in ascending order
	sort(head1);
}