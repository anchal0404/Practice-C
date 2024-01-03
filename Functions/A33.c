/*
Name: Anchal Rathore
Description:WAP to check whether a given number is prime or not using function.
Date:29.12.2023
*/

#include <stdio.h>

int is_prime(int num)
{
    int flag = 0;
    for (int i = 2; i*i <= num; i++)
    {
        if (num%i==0)
        {
            flag = 1;
            break;
        }
    }

    if(flag==1)
        printf("%d is not a prime number\n",num);
    else
        printf("%d is a prime number\n",num);
    return 0;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num<=1)
    {
        printf("Invalid input\n");
        return 1;
    }
    is_prime(num);

    return 0;
}
