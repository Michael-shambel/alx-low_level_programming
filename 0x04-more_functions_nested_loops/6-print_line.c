#include "main.h"

/**
 * print_line - print solid line
 *@n: number of itration
 * Return: Always 0.
 */
void print_line(int n)
{
int i;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
_putchar(95);
}
_putchar('\n');
}
}
