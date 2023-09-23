/*Descrption: C Program to Print Prime Numbers From 1 to N
*/

#include<stdio.h>
int main(int argc, char const *argv[])
{
	int n;
	printf("Enter the value of n:");
	scanf("%d",&n);

	for(int i=2;i<=n;i++)
	{
		int flag=1;
		for (int j = 2; j <=i/2; j++)
		{
			if(i%j==0)
			{
				flag = 0;
				break;
			}
		}
		if(flag==1)
			printf("%d\n",i);
	}

	return 0;
}