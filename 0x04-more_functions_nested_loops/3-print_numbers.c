#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print from 1 upto 9
 *
 * Return: void
 */
void print_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar (i + '0');
}
putchar ('\n');
}
