/*
Name: Anchal Rathore
Description:WAP to implement getword function
Date:01.01.2023
*/

#include <stdio.h>

int getword(char str[])
{
    int count=0;
    while (*str!='\0')
    {
        if(*str==' ')
        {
            *str == '\0';
            break;
        }
        count++;
        *str++;
    }
    return count;
    
}

int main()
{
        int len = 0;
	    char str[100];

		printf("Enter the string : ");
		scanf(" %[^\n]", str);

		len = getword(str);

        printf("You entered %s and the length is %d\n", str, len);
}