#include "main.h"

/**
 * print_rev
 *@s: value of string
 * Return: Always 0.
 */
void print_rev(char *s)
{
int length = 0;
int i;
while (*s != '\0')
{
length++;
s++;
}
for (i = length - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
