#include "main.h"

/**
 * _strlen - length of string
 *@s: string value
 * Return: len
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
