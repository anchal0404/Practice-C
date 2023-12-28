/*
Name: Anchal Rathore
Description:WAP to remove duplicate elements in a given array
Date:28.12.2023
*/
#include <stdio.h>

void remove_duplicates(int arr1[], int size, int arr2[], int *new_size)
{
    *new_size = 0;
    for (int i = 0; i < size; i++)
    {
        int flag = 0;
        for (int j = 0; j < *new_size; j++)
        {
            if (arr1[i] == arr2[j])
            {
                flag = 1;
                break;
            }
            
        }
        if (!flag)
        {
            arr2[(*new_size)++]=arr1[i];
        }
        
    }
}

int main()
{
    int size,new_size;

    printf("Enter the size: ");
    scanf("%d",&size);

    int arr1[size],arr2[size];

    for (int i = 0; i < size; i++)
    {
        scanf("%d",arr1+i);
    }

    remove_duplicates(arr1,size,arr2,&new_size);
    printf("After removing duplicates: ");
    for (int i = 0; i < new_size; i++)
    {
        printf("%d ",arr2[i]);
    }
    printf("\n");
    
    
}