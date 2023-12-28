/*
Name: Anchal Rathore
Description:WAP to find 2nd largest element in an array
Date:28.12.2023
*/

#include <stdio.h>

int sec_largest(int *arr, int size)
{
   int first,second;
    if (arr[0]<arr[1])
    {
        first = arr[1];
        second = arr[0];
    }
    else
    {
        first = arr[0];
        second = arr[1];
    }
    int i = 2;
    while (i<=(size - 1))
    {
        if (arr[i]>first)
        {
            second = first;
            first = arr[i];
        }
        else if(arr[i]<first && arr[i]>second)
        {
            second = arr[i];
        }
        i++;
    }
}

int main()
{
    int size, ret;
    
    //Read size from the user
    printf("Enter the size of the array :");
    scanf("%d", &size);
    
    int arr[size];
    
    //Read elements into the array
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    
    //funtion call
    ret = sec_largest(arr,size);
    
    printf("Second largest element of the array is %d\n", ret);
}