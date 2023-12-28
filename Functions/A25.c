/*
Name: Anchal Rathore
Description:WAP to implement your own ispunct() function
Date:28.12.2023
*/
#include <stdio.h>

int my_ispunct(int ch)
{
    if ((ch>=33 && ch<=47) || (ch>=58 && ch<=64) || (ch>=91 && ch<=96) || (ch>=123 && ch<=126))
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
    
    ret = my_ispunct(ch);

    if(ret)
    {
        printf("Entered character is punctuation character\n");
    }
    else
    {
       printf("Entered character is not punctuation character\n"); 
    }
    
}