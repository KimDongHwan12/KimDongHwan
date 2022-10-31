#include <stdio.h>

int main(void)
{
	int five[5], i;

	printf("Please input five integers : ");

	for (i = 0; i < 5; i++)
		scanf_s("%d", &five[i]);

	printf("Odd numbers:");
	for (i = 0; i < 5; i++)
	{
		if (five[i] % 2 == 1)
			printf("%d ", five[i]);
	}
	printf("\n");

	printf("Even numbers:");
	for (i = 0; i < 5; i++)
	{
		if (five[i] % 2 == 0)
			printf("%d ", five[i]);
	}
	return 0;
}

