#include <stdio.h>
#include <math.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	long i, max;
	long num = 612852475143;
	double num1 = sqrt(num);

	while (i = 1; i <= num1; i++)
	{
		if (num % i == 0)
		{
			max = num / i;
		}
	}
	printf("%ld\n", max);
	return (0);
}
