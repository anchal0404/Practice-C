#include "sll.h"

//remove duplicate data's from list
int remove_duplicates( Slist **head )
{
	if(*head == NULL)
		return LIST_EMPTY;
	if((*head)->link == NULL)
		return SUCCESS;

	Slist*temp = *head,*temp1,*next,*prev;

	while(temp)
	{
		prev = temp;
		temp1 = temp->link;
		while(temp1)
		{
			int flag = 1;
			if((temp->data)==(temp1->data))
			{
				next = temp1->link;
				temp1 -> link = NULL;
				prev ->link = next;
				free(temp1);
				temp1 = next;
				flag = 0;
			}

			if(temp1 !=NULL && flag == 1)
			{
				flag = 1;
				prev = prev->link;
				temp1 = temp1->link;
			}
		}
		temp = temp ->link;
	}


}