/*Descrption: C Program to check prime or not*/

#include<stdio.h>
int main(int argc, char const *argv[])
{
	int n,flag=0;
	printf("Enter the value of n:");
	scanf("%d",&n);
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
		
	}
	if(flag==0)
		printf("Prime number\n");
	else
		printf("Not prime\n");
	return 0;
}