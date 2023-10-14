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
	for (int i = 0; i <=n; ++i)
	{
		for (int k = 0; k <= n-i ; ++k)
		{
			printf(" ");
		}
		for (int j = 0; j<=i; ++j)
		{
			printf("%d ",combinations(i,j));
		}
		printf("\n");
	}

	
	return 0;
}