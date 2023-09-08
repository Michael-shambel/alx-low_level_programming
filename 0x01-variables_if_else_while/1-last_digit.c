#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int  n, rem;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	rem = n % 10;
	if (rem > 5)
	{
	printf("Last digit of %d is %u and is greater than 5\n", n, rem);
	}
	else if (rem == 0)
	{
	printf("Last digit of %d is %u and is 0\n", n, rem);
	}
	else if (rem < 6 && rem != 0)
	{
	printf("Last digit of %d is %u and is less than 6 and not 0\n", n, rem);
	}

	return (0);
}
