/*
Name: Anchal Rathore
Description:WAP to find 3rd largest element in an array
Date:28.12.2023
*/

#include <stdio.h>

int third_largest(int arr[], int size)
{
    int first = arr[0],second = arr[1],third=arr[2];

    int i=0;
    while (i<size)
    {
        if (arr[i]>first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
        else if(arr[i]<first && arr[i]>second)
        {
            third = second;
            second = arr[i];
        }
        else if(arr[i]>third && arr[i]<second)
        {
            third = arr[i];
        }
        
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
    
    //funtion call
    ret = third_largest(arr, size);
    
    printf("Third largest element of the array is %d\n", ret);
}