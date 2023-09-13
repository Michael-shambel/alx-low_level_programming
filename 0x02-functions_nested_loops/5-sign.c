#include "main.h"

/**
 * print_sign - print he sign of a number
 *@n: add value n
 * Return: 1 if it is posetive or 0 anthing else
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}

