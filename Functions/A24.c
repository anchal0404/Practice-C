/*
Name: Anchal Rathore
Description:WAP to implement your own islower() function
Date:28.12.2023
*/

#include <stdio.h>

int my_isalnum(int ch)
{
    if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0'&& ch <='9'))
    {
        return 1;
    }
    else
        return 0;
    
}

int main()
{
    char ch;
    int ret;
    
    printf("Enter the character:");
    scanf("%c", &ch);
    
    ret = my_isalnum(ch);

    if(ret)
        printf("The character '%c' is an alnum character\n",ch);
    else
        printf("The character '%c' is not an alnum character.\n",ch);
    
}
