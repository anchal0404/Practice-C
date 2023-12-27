/*
Name: Anchal Rathore
Description:WAP to find which day of the year
Date:27.12.2023
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n,first_day;
    printf("Enter the value of 'n': ");
    scanf("%d",&n);

    if(n<=0 || n>365)
    {
        printf("Error: Invalid Input, n value should be > 0 and <= 365\n");
        return 1;
    }
    
    printf("1. Sunday\n2. Monday\n3. Tuesday\n4. Wednesday\n5. Thursday\n6. Friday\n7. Saturday\n");
    printf("Enter the option to set the first day: ");
    scanf("%d",&first_day);

    if(first_day<=0 || first_day>7)
    {
        printf("Error: Invalid input, first day should be > 0 and <= 7\n");
        return 1;
    }

    int day_index = (n + first_day - 2) % 7;

    switch (day_index)
    {
    case 0:
        printf("The day is Sunday\n");
        break;
    case 1:
        printf("The day is Monday\n");
        break;
    case 2:
        printf("The day is Tuesday\n");
        break;
    case 3:
        printf("The day is Wednesday");
        break;
    case 4:
        printf("The day is Thursday");
        break;
    case 5:
        printf("The day is Friday");
        break;
    case 6:
        printf("The day is Saturday\n");
        break;
    default:
        break;
    }
    return 0;
}
