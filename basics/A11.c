/*
Name: Anchal Rathore
Description:WAP to check N th bit is set or not, If yes, clear the M th bit.
Date:27.12.2023
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num,mth,nth;
    printf("Enter the num:");
    scanf("%d",&num);

    printf("Enter the nth:");
    scanf("%d",&nth);

    printf("Enter the mth:");
    scanf("%d",&mth);

    if((num&(1<<nth))!=0)
    {
        num = num & (~(1<<mth));
    }

    printf("Updated value of num is %d",num);
    
    
    
    return 0;
}
