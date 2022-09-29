#include <stdio.h>

int main(void)
{
	int num;
	int i;
	int c;

	for (num = 0; num < 5; num++)
	{
		for (i = num; i <= 5-1 ; i++)
		{
			printf(" ");
		}
		for (c = 0; c <= (num * 2); c++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}


