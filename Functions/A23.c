/*
Name: Anchal Rathore
Description:WAP to implement your own isxdigit() function
Date:28.12.2023
*/

#include<stdio.h>

int is_xdigit(int ch)
{
    if ((ch>=48 && ch<=57) || (ch>=65 && ch<=70) || (ch>=97 && ch<=102))
    {
        return 1;
    }
    return 0;
}

int main()
{
    char ch;
    short ret;
    
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    ret = is_xdigit(ch);
    if(ret)
    {
        printf("Entered character is an hexadecimal digit\n");
    }
    else
        printf("Entered character is not an hexadecimal digit");
    return 0;
}
