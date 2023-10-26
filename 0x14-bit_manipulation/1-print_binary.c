#include "main.h"

/**
 *print_bi_rec - print binary recursivly
 *@n: input decimal
 *
 *Return: void
 *
 */
void print_bi_rec(unsigned long int n)
{
	if (n == 0)
		return;
	print_bi_rec(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}
/**
 *print_binary - prints out it
 *@n:decimal
 *
 *Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		print_bi_rec(n);
	}
}

