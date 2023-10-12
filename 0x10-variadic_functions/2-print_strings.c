#include "variadic_functions.h"

/**
 *print_strings - print filterd string
 *@separator: separate filtered string
 *@n: number
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *str;

	va_list pri_str;

	va_start(pri_str, n);

	while (i < n)
	{
		str = va_arg(pri_str, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(pri_str);
}
