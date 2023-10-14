#include <stdio.h>

void England()
{
	printf("England\n");
	return;
}

void Australia()
{
	printf("Australia\n");
	England();
	return;
}

void India()
{
	printf("India\n");
	Australia();
	return;
}

int main()
{
	India();
	return 0;
}