#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char CAP;

	for (CAP = 'a'; CAP <= 'Z'; CAP++)
	{
	putchar(CAP);
	}


	for (CAP = 'A'; CAP <= 'Z'; CAP++)
	{
	putchar(CAP);
	}
	putchar('\n');
	return (0);
}
