#include <stdio.h>

int main(void)
{
	int num = 0;
	int i = 0;
	int c = 0;

	for (num = 0; num < 5; num++)
	{
		for (i = num; i <= 4 ; i++)
		{
			printf(" ");
		}
		for (c = 0; c <= (num * 2); c++)
		{
			printf("*");
		}
		printf(" \n");
	}
	return 0;
}


