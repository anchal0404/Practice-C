#include <stdio.h>
int factorial(int x)
{
	int fact=1;
	for (int i = 2; i <= x; ++i)
	{
		fact = fact*i;
	}
	return fact;
}

int combinations(int n,int r)
{
	int ncr=1;
	ncr = factorial(n)/(factorial(r) * factorial(n-r));
	return ncr;
}
int main(int argc, char const *argv[])
{
	int n=1;
	printf("Enter n: ");
	scanf("%d",&n);
	printf("Enter r:");
	scanf("%d",&r);
	printf("%d",combinations(n,r));
	return 0;
}