/*
Name: Anchal Rathore
Description:
Date:
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num,flag=0;
    printf("Enter a num: ");
    scanf("%d",&num);

    for(int i=2;i*i<=num;i++)
    {
        if(num%i==0)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 1)
        printf("Not Prime number");
    else
        printf("Prime number");
    return 0;
}
