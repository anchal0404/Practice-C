/*
Name: Anchal Rathore
Description:WAP to generate fibbonacci numbers using recursion
Date:28.12.2023
*/
#include <stdio.h>

void positive_fibonacci(int limit, int first, int second, int next)
{
    printf("%d ,",next);
    first = second;
    second = next;
    next = first + second;

    if(next <= limit)
        positive_fibonacci(limit,first,second,next);
}

int main()
{
    int limit;
    
    printf("Enter the limit : ");
    scanf("%d", &limit);

    if(limit<0)
    {
        printf("Invalid Input\n");
        return 1;
    }
    
    positive_fibonacci(limit, 0, 1, 0);
    printf("\n");
    return 0;
}
