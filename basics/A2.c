/*
Name: Anchal Rathore
Description:WAP to generate positive Fibonacci numbers
Date:26.12.2023
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int first = 0,second = 1,num,next = 0;
    
    scanf("%d",&num);
    while (next<=num)
    {
        printf("%d ",next);
        first = second;
        second = next;
        next = first + second;
    }
    
    return 0;
}
