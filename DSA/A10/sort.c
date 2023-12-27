#include "sll.h"    

// Function to sort nodes of the linked list in ascending order 
int sort(Slist **head) 
{  
	int flag = 0;
	do
	{
		Slist *prev = NULL,*current = *head , *next = current->link;

		flag= 0;
		while(next!=NULL)
		{
			if(current->data > next ->data)
			{
				flag = 1;

				// If the current node is not the first node
				if (prev!=NULL)
				{
					Slist*temp = next->link;
					prev->link = next;
					next->link=current;
					current->link=temp;
				}
				else
				{
					// If the current node is the first node
					Slist*temp = next->link;
					*head = next;
					next ->link = current;
					current->link = temp;
				}
				prev=next;
				next=current->link;
			}
			else
			{
				prev = current;
				current = next;
				next= next->link;
			}
		}
	}while(flag>0);
	return SUCCESS;

} 