#include <stdio.h>

int main(void)
{
	int five[5], i;

	printf("정수를 입력해 주세요 : ");

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

