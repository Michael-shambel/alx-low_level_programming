#include "main.h"

/**
 * print_triangle - print shape
 *@size: length
 * Return: nothing
 */
void print_triangle(int size)
{
	int i = 0, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < size)
		{
			for (j = size - i; j > 1; j--)
			{
				_putchar(32);
			}
			for (k = 0; k <= i; k++)
			{
				_putchar(35);
			}
			i++;
			_putchar('\n');
		}
	}
}
