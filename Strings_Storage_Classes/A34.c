/*
Name: Anchal Rathore
Description:WAP to replace each string of one or more blanks by a single blank
Date:29.12.2023
*/
#include <stdio.h>

void replace_blank(char arr[])
{
    char* ptr;
    while (*arr!='\0')
    {
        if ((*arr == ' '||*arr == '\t')&&(*(arr+1)==' '||*(arr+1)=='\t'))
        {
            while (*arr!='\0')
            {
                if (*(arr+1)=='\t')
                {
                    *arr = ' ';
                }
                else
                {
                    *arr = *(arr+1);
                }
                *arr++;
                
            }
            arr = ptr-1;
        }
        arr++;
    }
}

int main()
{
    char str[50];
    
    printf("Enter the string with more spaces in between two words\n");
    scanf("%[^\n]", str);
    
    replace_blank(str);
    
    printf("%s\n", str);
}