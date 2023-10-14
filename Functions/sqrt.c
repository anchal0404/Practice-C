#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
	int a;
	printf("A=");
	scanf("%d",&a);

	int root = sqrt(a);
	printf("Root = %d\n",root);

	int q = pow(3,2);
	printf("pow = %d",q);

	return 0;
}