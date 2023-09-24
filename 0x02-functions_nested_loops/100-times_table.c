#include "main.h"

/**
 * print_times_table - prining time table
 *@n: number to be time tabled
 * Return: nothing
 */
void print_times_table(int n)
{
	int i;
	int j;
	int mul;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');
				mul = i * j;
				if (mul <= 99)
					_putchar(' ');
				if (mul <= 9)
					_putchar(' ');
				if (mul >= 100)
				{
					_putchar((mul / 100) + '0');
					_putchar((mul / 10) % 10 + '0');
				}
				else if (mul <= 99 && mul >= 10)
				{
					_putchar((mul / 10) + '0');
				}
				_putchar((mul % 10) + '0');
			}
			_putchar('\n');
		}
	}
}

