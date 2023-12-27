/*
Name: Anchal Rathore
Description:WAP to print pyramid pattern as shown below
Date:27.12.2023
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int i,j,k,l,num;
    scanf("%d",&num);
    
    
    for ( k = num; k >= 1; k--)
    {
        for ( l = k ; l <= num; l++)
        {
            printf("%d ",l);
        }
        printf("\n");
    }
    
    for (i = 2; i <= num; i++)
    {
        for (j = i; j<=num; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    

    return 0;
}
