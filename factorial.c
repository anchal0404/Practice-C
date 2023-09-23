/*Descrption: . C Program to Find Factorial of a Number */

#include<stdio.h>
int factorial(int n)
{
	int fact=1;
	for (int i = 2; i <=n ; i++)
		fact*=i;
	return fact;
}
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	/*Factorial*/
	int res=factorial(n);
	printf("Factorial = %d\n",res);
	return 0;
}

