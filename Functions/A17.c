/*
Name: Anchal Rathore
Description:WAP to print 'n' bits from LSB of a number
Date:28.12.2023
*/

#include <stdio.h>

int toggle_nbits_from_pos(int num, int n, int pos)
{
    return (num^(((1<<n)-1))<<(pos-n+1));
}

int main()
{
    int num, n, pos, res = 0;
    
    printf("Enter num, n and val:");
    scanf("%d%d%d", &num, &n, &pos);
    
    res = toggle_nbits_from_pos(num, n, pos);
    
    printf("Result = %d\n", res);
}