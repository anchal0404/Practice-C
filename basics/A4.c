/*
Name: Anchal Rathore
Description:WAP to check if number is perfect or not
Date:26.12.2023
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d",&n);
    int sum = 0;
    for (int i = 1;i < n;i++)
    {
        if (n%i==0)
        {
            sum+=i;
        }
        else
        {
            continue;
        }
    }
    
    if(sum == n)
    {
        printf("Perfect Number");
    }
    else
    {
        printf("Not Perfect Number");
    }
    return 0;
}
