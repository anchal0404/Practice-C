/*Write a Program to reverse a number.*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num = 15942,reverse=0,remainder;
	while(num!=0)
	{
		remainder = num%10;
		reverse = reverse *10 + remainder;
		num/=10;
	}

	printf("Reversed number = %d\n",reverse);
	return 0;
}