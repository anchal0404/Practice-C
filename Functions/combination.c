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

int permutations(int n,int r)
{
	int npr=1;
	npr = factorial(n)/factorial(n-r);
	return npr;
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
	int r =1;
	printf("Enter r:");
	scanf("%d",&r);
	printf("combinations = %d\n",combinations(n,r));
	printf("permutations = %d\n",permutations(n,r));
	return 0;
}