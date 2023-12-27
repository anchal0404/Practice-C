/*
Name: Anchal Rathore
Description:WAP to print triangle pattern as shown below
Date:26.12.2023
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num,count=1;
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            if(i==1 || j==1 || i+j == num+1)
            {
                printf("%d ",count);
                count++;
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
