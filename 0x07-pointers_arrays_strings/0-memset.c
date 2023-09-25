#include "main.h"

/**
 * *_memset - his is enrty
 * @s: distination
 * @b: constant
 * @n: byte
 *
 * Return: Nothing.
 */
char *_memset(char *s, chr b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
