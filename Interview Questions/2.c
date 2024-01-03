/*Write a Program to check whether a number is prime or not.*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num,flag;
	scanf("%d",&num);

	for (int i = 2; i*i <= num; i++)
	{
		if(num%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
		printf("Not prime\n");
	else
		printf("Prime\n");
	return 0;
}