/*
Name: Anchal Rathore
Description:WAP to generate negative fibbonacci numbers using recursion
Date:28.12.2023
*/

#include <stdio.h>

void negative_fibonacci(int limit, int first, int second, int next)
{
    printf("%d ,",next);
    first = second;
    second = next;
    next = first - second;

    if (next>=limit && next<=-limit)
    {
        negative_fibonacci(limit,first,second,next);
    }
    
}

int main()
{
    int limit;
    
    printf("Enter the limit : ");
    scanf("%d", &limit);
    
    negative_fibonacci(limit, 0, 1, 0);
}