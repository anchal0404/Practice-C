/*
Name: Anchal Rathore
Description:WAP to print the numbers in X format as shown below
Date:26.12.2023
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num=5;

    for (int i = 1; i <= num ; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            if((i==j || i+j==num+1))
            {
                printf("%d",j);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
