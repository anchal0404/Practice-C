/*
Name: Anchal Rathore
Description:Axx - WAP to generate the prime series upto the given limit using functions
Date:29.12.2023
*/

#include <stdio.h>

int is_prime(int i)
{
    for (int j = 2; j*j <= i; j++)
    {
        if (i%j==0)
        {
            return 0;
        }
        return 1;
    }
    
}

void generate_prime(int limit)
{
    for (int i = 2; i <= limit; i++)
    {
        if (is_prime(i))
        {
            printf("%d ,",i);
        }
    }
}

int main()
{
    int limit;
    
    printf("Enter the limit: ");
    scanf("%d", &limit);
    
    if (limit > 1)
    {
        generate_prime(limit);
    }
    else
    {
        printf("Invalid input\n");
    }
    
    return 0;
}
