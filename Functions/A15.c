/*
Name: Anchal Rathore
Description:WAP to replace 'n' bits of a given number.
Date:27.12.2023
*/

#include<stdio.h>
int replace_nbits(int,int,int);
int main(int argc, char const *argv[])
{
    int num,bits,val;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Enter number of bits:");
    scanf("%d",&bits);
    printf("Enter the value:");
    scanf("%d",&val);
    int res = replace_nbits(num,bits,val);
    printf("Result: %d",res);
    return 0;
}

int replace_nbits(int num,int n,int val)
{
    int res;
    num&=~((1<<n)-1);
    res = num|val;
    return res;
}
