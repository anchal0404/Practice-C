/*Descrption: C program of fibonacci series*/

#include<stdio.h>
int main(int argc, char const *argv[])
{
	int n,first=0,second=1,next=0;
	printf("Enter the number:");
	scanf("%i",&n);
	while(next<=n)
	{
		printf("%d ",next);
		first=second;
		second = next;
		next=first+second;
	}
	return 0;
}