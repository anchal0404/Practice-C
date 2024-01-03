/*Write a Program to convert the binary number into a decimal number.*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
	int num;
	scanf("%d",&num);

	int a=1;
	int ans = 0;
	while(num!=0)
	{
		ans = ans + (num%10)*a;
		num = num/10;
		a = a*2;
	}

	printf("%d\n",ans);
	return 0;
}