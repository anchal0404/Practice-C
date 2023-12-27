/*
Name: Anchal Rathore
Description:WAP to get 'n' bits of a given number
Date:27.12.2023
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n,num,new=0;

    printf("Enter num: ");
    scanf("%d",&num);

    printf("Enter 'n': ");
    scanf("%d",&n);

    new = num&((1<<n)-1);
    printf("Result = %d",new);
    return 0;
}
