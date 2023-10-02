#include "main.h"

/**
 * _puts - print a paragraph
 *@str: string value
 * Return: nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
