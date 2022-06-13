#include "main.h"

/**
 * more_numbers - print numbers
 *
 * Return: Always 0
 */
void more_numbers(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 15; j++)
{
if (j / 10 != 0)
{
_putchar(y / 10 + '0');
}
_putchar(y % 10 + '0');
}
_putchar('\n');
}
}
