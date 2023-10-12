#include "variadic_functions.h"

/**
 *print_numbers - print every number
 *@separator: separet between two intgers
 *@n: number to be printed
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	unsigned int print;

	va_list number;

	va_start(number, n);

	while (i < n)
	{
		print = va_arg(number, unsigned int);
		printf("%d", print);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");

	va_end(number);
}
