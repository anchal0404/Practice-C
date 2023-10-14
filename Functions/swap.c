#include <stdio.h>
void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void swap1(int *a,int *b)
{
	*a = (*a) ^ (*b);
	*b = (*a) ^ (*b);
	*a = (*a) ^ (*b);
}


void swap2(int *a,int *b)
{
	*a = (*a) + (*b);
	*b = (*a) - (*b);
	*a = (*a) - (*b);
}

int main(int argc, char const *argv[])
{
	int a ,b;
	printf("Enter a and b:");
	scanf("%d %d",&a,&b);
	swap(&a,&b);
		printf("a = %d,b = %d\n",a,b);
	swap1(&a,&b);
		printf("a = %d,b = %d\n",a,b);
	swap2(&a,&b);
		printf("a = %d,b = %d\n",a,b);
	return 0;
}