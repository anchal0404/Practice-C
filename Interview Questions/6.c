/*Write a Program to Check if a number is an Armstrong number or not.*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num,original_num,remainder,result = 0;
	printf("Enter a num: ");
	scanf("%d",&num);

	while(original_num!=0)
	{
		remainder = original_num%10;
		result +=remainder*remainder*remainder;

		original_num/=10;
	}

	if(result==num)
		printf("%d is an Armstrong number.\n",num);
	else
		printf("%d is not an Armstrong number.\n",num);
	return 0;
}