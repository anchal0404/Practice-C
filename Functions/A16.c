/*
Name: Anchal Rathore
Description:WAP to get 'n' bits from given position of a number
Date:27.12.2023
*/

#include<stdio.h>
int get_nbits_from_pos(int num,int n,int pos)
{
    return ((num&(((1<<n)-1)<<(pos-n+1)))>>(pos-n+1));
}

int main(int argc, char const *argv[])
{
    int num,bits,pos;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Enter number of bits:");
    scanf("%d",&bits);
    printf("Enter the value:");
    scanf("%d",&pos);
    int res = get_nbits_from_pos(num,bits,pos);
    printf("Result: %d",res);

    return 0;
}
