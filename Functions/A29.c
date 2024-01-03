/*
Name: Anchal Rathore
Description:WAP to find factorial of given number using recursion
Date:28.12.2023
*/


#include <stdio.h>
int flag = 0;
int main()
{
    static int num;
    
    static unsigned long long int fact = 1;
    
    if (flag==0)
    {
        printf("Enter the value of N: ");
        scanf("%d",&num);
        flag = 1;
    }
    
    
    if (num<0)
    {
        printf("Invalid input");
        return 0;
    }

    if (num!=0)
    {
        fact = fact*(num--);
        main();
    }
    else
    {
        printf("Factorial of the give number is %d\n",fact);
    }
    
}