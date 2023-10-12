#include "variadic_functions.h"

/**
 *sum_them_all - compute sum of integer
 *@n: integer to be add
 *
 * Return: sum of integer
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	unsigned int sum = 0;

	va_list placer;

	va_start(placer, n);
	while (i < n)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			sum = sum + va_arg(placer, unsigned int);
		}
		i++;
	}
	va_end(placer);
	return (sum);
}
