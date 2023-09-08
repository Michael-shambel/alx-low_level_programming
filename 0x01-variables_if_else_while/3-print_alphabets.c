#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char CAP, SMALL;

	for (SMALL = 'a'; SMALL <= 'Z'; SMALL++)
	{
	putchar(SMALL);
	}
	for (CAP = 'A'; CAP <= 'Z'; CAP++)
	{
	putchar(CAP);
	}
	putchar('\n');
	return (0);
}
