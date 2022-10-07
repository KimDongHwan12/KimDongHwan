#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	printf("Plese enter a number: ");
	scanf("%d", &num);
	printf("%d", Binary(num));
	return 0;
}

int Binary(int n)
{
	
	if (n == 0 || n == 1)
		printf("%d", n);
	else
	{
		Binary(n / 2);
		printf("%d", n % 2);
	}
	return 0;
}