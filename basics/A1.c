/*
Name: Anchal Rathore
Description:WAP to check if number is odd or even
Date:26.12.2023
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    scanf("%d",&num);
    if (num&1 == 1)
    {
        printf("Odd");
    }
    else
    {
        printf("Even");
    }
    return 0;
}
