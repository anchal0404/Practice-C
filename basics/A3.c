/*
Name: Anchal Rathore
Description: WAP to generate negative Fibonacci numbers
Date:26.12.2023
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num,first=0,second=1,next=0;
    scanf("%d",&num);
    if(num>0)
    {
        printf("Invalid input");
    }
    while(next>=num && next<=-num)
    {
        printf("%d ",next);
        first = second;
        second = next;
        next = first - second;
    }
    return 0;
}
