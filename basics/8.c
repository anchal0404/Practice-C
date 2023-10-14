/*Descrption: C Program to Swap Two Numbers */

#include<stdio.h>
int main(int argc, char const *argv[])
{
	int n1,n2;
	printf("Enter two numbers: ");
	scanf("%d %d",&n1,&n2);

	/*Swap*/
	n1=n1^n2;
	n2=n1^n2;
	n1=n1^n2;

	printf("n1= %d n2= %d",n1,n2);
	return 0;
}