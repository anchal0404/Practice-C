/*
Name: Anchal Rathore
Description:WAP to count number of set bits in a given number and print parity
Date:27.12.2023
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num,count = 0;
    printf("Enter num :");
    scanf("%d",&num);

    for (int i = 0; i < 32; i++)
    {
        if((num&(1<<i)) != 0)
            count++;
        else
            continue;
    }

    printf("Number of set bit = %d\n",count);
    if ((count&1) != 0)
    {
        printf("Bit parity is odd");
    }
    else
        printf("Bit parity is even");
    return 0;
}
