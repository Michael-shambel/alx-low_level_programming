#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 0;
	long j = 1, k = 2;

	for (i = 0; i < 50; i++)
	{
		if (i == 0)
		{
			printf("%ld", j);
		}
		else if (i == 1)
		{
			printf(", %ld", k);
		}
		else
		{
			k = k + j;
			j = k - j;
			printf(", %ld", k);
		}
		++i;
	}
	printf("\n");
	return (0);
}
