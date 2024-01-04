#include <stdio.h>

int pangram(char str[])
{
    int arr[26] = {0};
    while (*str!='\0')
    {
        char ch = *str;
        if ('a'<=ch && ch<='z')
        {
            arr[ch-'a']++;
        }
        else if('A'<=ch && 'Z' >=ch)
        {
            arr[ch-'A']++;
        }
        str++;
    }

    for (int i = 0; i < 26; i++)
    {
        if(arr[i]==0)
            return 0;
    }
    
    return 1;
    

}

int main()
{
    char str[100];
    printf("Ener the string: ");
    scanf("%[^\n]",str);

    int res = pangram(str);
    if (res)
    {
        printf("The Entered string is a pangram string\n");
    }
    else
        printf("The entered string is not a pangram string\n");
    
}