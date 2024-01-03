/*Write a program to Factorial of a Number.*/

#include<stdio.h>
int main(int argc, char const *argv[])
{
	int fact = 1,num;
	scanf("%d",&num);
	for (int i = 1; i <= num; ++i)
	{
		fact = fact*i;
	}
	printf("%d",fact);
	return 0;

}