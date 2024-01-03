/*
Name: Anchal Rathore
Description:WAP to count no. of characters, words and lines, entered through stdin
Date:29.10.2023
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int l_count = 0,w_count=0,c_count=0,word = 0;

    int ch;
    while ((ch=getchar())!=EOF)
    {
        c_count++;
        if (ch==' ' || ch=='\t' || ch=='\n')
        {
            w_count++;
            if (ch == '\n')
            {
                l_count++;
            }
        }
    }
    if (word)
    {
        w_count++;
    }
    printf("\nCharacter count: %d\nLine count : %d\nWord count : %d\n",c_count,l_count,w_count);
    
    
    return 0;
}
