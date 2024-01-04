#include <stdio.h>

void reverse_iterative(char str[])
{
    int len = 0;
    while (*str!='\0')
    {
        len++;
        str++;
    }
    str=0;

    int j = len-1;
    for (int i = 0; i < len/2; i++)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        j--;
    }
}
int main()
{
    char str[30];
    
    printf("Enter any string : ");
    scanf("%[^\n]", str);
    
    reverse_iterative(str);
    
    printf("Reversed string is %s\n", str);
}
