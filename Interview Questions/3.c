/*Write a Program in C to Swap the values of two variables without using any extra variable.*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num1,num2;
	scanf("%d",&num1);
	scanf("%d",&num2);

	num1 = num1^num2;
	num2 = num1^num2;
	num1 = num1^num2;

	printf("num1=%d\n",num1);
	printf("num2=%d",num2);


	return 0;
}