#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 *@n: input the number to be last chaked
 * Return: Always 0.
 */

int print_last_digit(int n)
{
int digit;
digit = n % 10;
if (digit  < 0)
{
digit = digit * -1;
}
_putchar(digit);
return (digit);
}
