#include <stdio.h>
#include <math.h>

double stdev(double ptr[])
{
	double sum = 0;
	double a = 0;
	double ave;
	for (int i = 0; i < 5; i++)
	{
		sum += ptr[i];
	}
	ave = sum / 5;
	for (int i = 0; i < 5; i++)
		a += pow(ptr[i] - ave, 2);
	return sqrt(a / 5);
}
int main(void)
{
	double num[5];

	printf("Enter 5 real numbers: ");
	for (int i = 0; i < 5; i++)
		scanf_s("%lf", &num[i]);
	printf("Standard Deviation = %.3f", stdev(num));

	return 0;
		
}
