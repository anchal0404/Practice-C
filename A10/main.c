/*
   File Type: C
   Name: Anchal Rathore
   Description:Function to merge two linked list into one
   Date:17/10/2023
   Sample Input and Output:
./A10.exe
1. Insert at  List 1
2. Insert at list 2
3. Print list
4. Sorted merge
5. Exit
Enter your choice: 1
Enter the data to be inserted at list 1 : 5
1
Enter the data to be inserted at list 1 : 3
1
Enter the data to be inserted at list 1 : 6
1
Enter the data to be inserted at list 1 : 8
1
Enter the data to be inserted at list 1 : 9
2
Enter the data to be inserted at list 2 : 3
1
Enter the data to be inserted at list 1 : 5
1
Enter the data to be inserted at list 1 : 7
2
Enter the data to be inserted at list 2 : 3
2
Enter the data to be inserted at list 2 : 90
2
Enter the data to be inserted at list 2 : 54
2
Enter the data to be inserted at list 2 : 66
2
Enter the data to be inserted at list 2 : 32
3

List 1 -> 5 -> 3 -> 6 -> 8 -> 9 -> 5 -> 7 -> NULL


List 2 -> 3 -> 3 -> 90 -> 54 -> 66 -> 32 -> NULL
4
INFO : Sorted merge Successfull
3
3 -> 3 -> 3 -> 5 -> 5 -> 6 -> 7 -> 8 -> 9 -> 32 -> 54 -> 66 -> 90 -> NULL
*/

#include "sll.h"

int main()
{
	//variable declaration
	Slist *head1 = NULL;
	Slist *head2 = NULL;
	int choice, data, temp = 0;

	printf("1. Insert at  List 1\n2. Insert at list 2\n3. Print list\n4. Sorted merge\n5. Exit\nEnter your choice: ");
	while (1)
	{
		//call function display menu
		scanf("%d", &choice);

		switch (choice)
		{

			//insert element at last
			case 1:
				printf("Enter the data to be inserted at list 1 : ");
				scanf("%d", &data);

				if (insert_at_last(&head1, data) == FAILURE)
					printf("INFO: Failed to Inserting the new data at last..try again\n");
				break;

			case 2:

				printf("Enter the data to be inserted at list 2 : ");
				scanf("%d", &data);

				if (insert_at_last(&head2, data) == FAILURE)
					printf("INFO: Failed to Inserting the new data at last..try again\n");
				break;

			case 3:
				if (temp == 0)
				{
					printf("\nList 1 -> ");
					print_list(head1); // print list_1
					printf("\n\nList 2 -> ");
					print_list(head2); // print list_2
					break;
				}
				else
					print_list(head1);
				break;

			case 4:
			 
				if (sorted_merge(&head1, &head2) == SUCCESS)
				{
				    temp = 1;
					printf("INFO : Sorted merge Successfull\n");
				}
				else
					printf("INFO : Both list are Empty\n");

				break;

			case 5 :
				return SUCCESS;

			default:
				printf("\nEnter the proper choice\n");

		}

	}

	return 0;
}		