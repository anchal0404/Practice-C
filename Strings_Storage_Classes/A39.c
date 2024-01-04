#include <stdio.h>

void reverse_recursive(char str[], int ind, int len)
{
    if(ind>=len/2)
        return;
    
    char temp = str[ind];
    str[ind] = str[len-1-ind];
    str[len-1-ind] = temp;
    reverse_recursive(str,ind+1,len);
}

int main()
{
    char str[30];
    int index;
    int len=0;
    
    printf("Enter any string : ");
    scanf("%[^\n]", str);
    while (str[index]!='\0')
    {
        len++;
        index++;
    }
    index = 0;
    reverse_recursive(str, index, len);
    printf("Reversed string is %s\n", str);
}