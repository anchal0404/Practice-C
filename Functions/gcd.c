#include <stdio.h>
int min(int a,int b)
{
	if(a<b) return a;
	else return b;
}
int hcf(int a,int b)
{
	int hcf;
	for (int i = min(a,b); i >= 1; i--)
	{
		if(a%i == 0 && b%i == 0)
		{
			hcf = i;
			break;
		}
	}
	return hcf;
}
int main()
{
	int a,b;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	int gcd = hcf(a,b);
	printf("The hcf of %d and %d is : %d",a,b,gcd);
	return 0;
}