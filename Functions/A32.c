/*
Name: Anchal Rathore
Description:Print the values in sorted order without modifying or copying array
Date:28.12.2023
*/


#include <stdio.h>

void print_sort(int arr[], int size)
{
    int smallest = arr[0],largest = arr[0];
    
    for (int i = 0; i < size; i++)
    {
        if(arr[i]<smallest)
        {
            smallest=arr[i];
        }
        if(arr[i]>largest)
        {
            largest = arr[i];
        }
    }
    printf("After sorting: ");

    int sec_smallest = largest;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[j]>smallest && arr[j]<sec_smallest)
            {
                sec_smallest = arr[j];
            }
        }
        printf("%d ",smallest);
        smallest = sec_smallest;
        sec_smallest = largest;
        
    }
    printf("\n");
}

int main()
{
    int size, iter;
    
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter the %d elements\n");
    for (iter = 0; iter < size; iter++)
    {
        scanf("%d", &arr[iter]);
    }
    
    print_sort(arr, size);

    printf("After sorting: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
}