#include "main.h"

/**
 * print_alphabet_x10 - print alphabet ten times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
int i = 0;
char c;
while (i < 10)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
i++;
_putchar('\n');
}
}
