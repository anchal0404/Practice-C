/*
Name: Anchal Rathore
Description:WAP to put the (b-a+1) lsb’s of num into val[b:a]
Date:28.12.2023
*/

#include <stdio.h>

int replace_nbits_from_pos(int num, int a , int b, int val)
{
    int pos = b-a+1;
    unsigned int mask = (((1<<pos)-1)<<a);
    val &= ~mask;
    num &=((1<<pos)-1);
    num<<=a;
    val |= num ;
    return val;
}

int main()
{
    int num, a, b, val, res = 0;
    
    printf("Enter num, a, b, and val:");
    scanf("%d %d %d %d", &num, &a, &b, &val);
    
    res = replace_nbits_from_pos(num, a, b, val);
    
    printf("Result = %d\n", res);
}