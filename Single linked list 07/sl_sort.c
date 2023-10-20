#include "sll.h"

int sl_sort(Slist **head)
{
    // Initialize flag for sorting
     int flag = 0;
 
    // Check if the list is empty
    if(*head == NULL)
    {
        return LIST_EMPTY;
    }

     // Check if the list has only one element (already sorted)
    if((*head)->link == NULL)
    {
        return SUCCESS;
    }

    // Perform sorting using the Bubble Sort algorithm
    do
    {
        
        Slist *prev = NULL;
        
        Slist *current = *head;
        
        Slist *next = current->link;
        flag = 0;// Reset flag for this pass
        
        // Traverse the list
        while(next != NULL)
        {
           // Compare data of current and next nodes
            if( current->data  >  next->data )
            {
                // Set flag to 1 to indicate a swap
                flag = 1;

                // Swap nodes
                if( prev != NULL )
                {
                    Slist *temp = next->link;
                    prev->link = next;
                    next->link = current;
                    current->link = temp;
                }
                else
                {
                   
                    Slist *temp = next->link;
                    *head = next;
                    next->link = current;
                    current->link = temp;
                }
                // Update pointers
                prev = next;
                next = current->link;
            }
            else
            {
               // Move to the next nodes
                prev = current ;
                current = next ;
                next = next->link;
            }
        }

    }while(flag > 0);// Continue until no more swaps are needed
    return  SUCCESS;
}