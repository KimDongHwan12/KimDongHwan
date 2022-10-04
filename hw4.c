#include <stdio.h>

int main(void)
{
	int num;
	int c;
	int x = 0;

	printf("Please enter a number : ");
	scanf_s("%d", &num);

	for (c = 1; c <= num; c++)
		if (num % c == 0)
		{
			x += 1;
		}
	if (x == 2)
		printf("It is a prime number");
	else
		printf("It is not prime number");

	return 0;
}






	