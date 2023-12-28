/*
Name: Anchal Rathore
Description:WAP to implement Circular right shift
Date:28.12.2023
*/

#include <stdio.h>

int circular_right(unsigned num, unsigned n)
{
    return ((num >> n)|(num << (32-n)));
}
int print_bits(unsigned ret)
{
    for (int i = 31; i >= 0; i--)
    {
        if((ret&(1<<i))!=0)
            printf("1 ");
        else
            printf("0 ");
    }
    
}

int main()
{
    unsigned int num, n, ret;
    
    printf("Enter the num:");
    scanf("%d", &num);
    
    printf("Enter n:");
    scanf("%d", &n);
    
    ret = circular_right(num, n);
    
    print_bits(ret);
}