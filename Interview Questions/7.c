/*Check Armstrong Number of n digits*/

#include<stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	int num,original_num,remainder,n=0;
	float result = 0.0;

	printf("Enter an integer: ");
	scanf("%d",&num);

	original_num = num;

	for (original_num = num; original_num!=0 ; ++n)
	{
		original_num/=10;
	}

	for (original_num = num;original_num!=0;original_num/=10)
	{
		remainder = original_num%10;

		result += pow(remainder,n);
	}

	if((int)result==num)
		printf("%d is an Armstrong number.",num);
	else
		printf("%d is not an Armstrong number.",num);
	return 0;
}