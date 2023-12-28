/*
Name: Anchal Rathore
Description:
Date:
*/

#include <stdio.h>

int print_bits(int num, int n)
{
    for (int i = n-1; i >= 0; i--)
    {
        if((num&(1<<i))!=0)
            printf("1 ");
        else
            printf("0 ");
    }
    
}

int main()
{
    int num, n;
    
    printf("Enter num, n :\n");
    scanf("%d%d", &num, &n);
    
    printf("Binary form of %d:", num);
    print_bits(num, n);
 }