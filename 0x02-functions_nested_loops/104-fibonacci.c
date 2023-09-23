# include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long fb1 = 0, fb2 = 0, sum;
	unsigned long fb1_1, fb1_2, fb2_1, fb2_2;
	unsigned long h1, h2;

	for (count = 0; count < 92; count++)
	{
		sum = fb1 + fb2;
		printf("%lu, ", sum);
		fb1 = fb2;
		fb2 = sum;
	}
	fb1_1 = fb1 / 10000000000;
	fb2_1 = fb2 / 10000000000;
	fb1_2 = fb1 % 10000000000;
	fb2_2 = fb2 % 10000000000;
	for (count = 93; count < 99; count++)
	{
		h1 = fb1_1 + fb2_1;
		h2 = fb1_2 + fb2_2;
		if (fb1_2 + fb2_2 > 9999999999)
		{
			h1 += 1;
			h2 %= 10000000000;
		}
		printf("%lu%lu", h1, h2);
		if (count != 98)
			printf(", ");
		fb1_1 = fb2_1;
		fb1_2 = fb2_2;
		fb2_1 = h1;
		fb2_2 = h2;
	}
	printf("\n");
	return (0);
}

