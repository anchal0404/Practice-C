/*
Name: Anchal Rathore
Description:WAP to print all primes using Sieve of Eratosthenes method
Date:27.12.2023
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num,i;
    printf("Enter the value of 'n': ");
    scanf("%d",&num);

    if(num<=1)
    {
        printf("Please enter a positive number which is > 1\n");
        return 1;
    }
    int arr[num+1];
    for(i = 2 ;i<=num;i++)
    {
        arr[i] = 1;
    }

    for(i=2;i*i<=num;i++)
    {
        if(arr[i]==1)
        {
            for(int j = i*i;j<=num;j+=i)
            {
                arr[j] = 0;
            }
        }
    }

    printf("The primes less than or equal to %d are: ",num);
    for(i =2 ; i<=num;i++)
    {
        if(arr[i])
            printf("%d ",i);
    }
    return 0;
}
