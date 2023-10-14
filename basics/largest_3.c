/*Descrption: . C Program to Find Largest Number Among Three Numbers*/

#include<stdio.h>
int main()
{
	int n1,n2,n3;
	printf("Enter three numbers:");
	scanf("%d %d %d",&n1,&n2,&n3);
	if (n1>n2 && n1>n3 )
		printf("n1 = %d",n1);
	else if(n2>=n1 && n2>=n3)
		printf("n2 = %d",n2);
	else
		printf("n3 = %d",n3);
	return 0;
}