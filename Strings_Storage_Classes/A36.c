/*
Name: Anchal Rathore
Description: WAP to implement atoi function
Date:01.01.2023
*/

#include <stdio.h>

int my_atoi(const char str[])
{
    int integer = 0,f=1; //Variable Initialisation.
    while (*str==' '||*str=='\t')
    {
        str++;
    }

    if (*str=='+')
    {
        str++;
    }
    else if (*str=='-')
    {
        f = -1;
        str++;
    }

    while (*str>='0' && *str<='9')
    {
        integer = integer * 10 +(*str - '0');
        str++;
    }
    return integer*f;
}
    

int main()
{
    char str[20];
    
    printf("Enter a numeric string : ");
    scanf("%s", str);
    
    printf("String to integer is %d\n", my_atoi(str));

    return 0;
}