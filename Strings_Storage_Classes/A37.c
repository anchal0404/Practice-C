/*
Name: Anchal Rathore
Description:WAP to implement itoa function
Date:01.01.2023
*/

#include <stdio.h>

void itoa(int num, char str[])
{
    int sign = 0;
    if(num == 0)
    {
        *str++ = '0';
        *str = '\0';
        return;
    }

    if (num<0)
    {
        sign = 1;
        num = -num;
    }
    
    while (num!=0)
    {
        int digit = num%10;
        *str = digit + '0';
        num/=10;
    }

    if (sign)
    {
        *str = '-';
    }

    *str = '\0';
    
    reverse(str,*str);
}

int main()
{
    int num;
    char str[10];
    
    printf("Enter the number:");
    if (scanf("%d",&num)!=1)
    {
        printf("Integer to string is 0\n");
        return 1;
    }
    
    
    itoa(num, str);
    
    printf("Integer to string is %s", str);

    return 0;
}

void reverse(char str[],int len)
{
    int loop = len/2;
    len -= 1;
    for (int  i = 0; i < len; i++)
    {
        char temp = str[i];
        str[i] = str[len];
        str[len] = temp;
        len--; 
    }
    
}