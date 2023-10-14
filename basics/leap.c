/*Descrption: C */

#include<stdio.h>
int main(int argc, char const *argv[])
{
	int year;
	printf("Enter the year: ");
	scanf("%d",&year);
	if(year%4==0)
	{
		if (year%400==0)
		{
			if (year%100==0)
			{
				printf("Not a leap year\n");
			}
			else
			{
				printf("Leap year\n");
			}
		}
		else
			printf("Not a leap year\n");
	}
	else
		printf("Not a leap year\n");
return 0;
}