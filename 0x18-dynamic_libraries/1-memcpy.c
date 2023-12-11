#include "main.h"

/**
 * _memcpy - enrty
 * @dest: desination input
 * @src: input
 * @n: input
 *
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
