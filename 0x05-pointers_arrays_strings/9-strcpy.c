#include "main.h"

/**
 *_strcpy - copy a string
 *@dest: new copy
 *@src: string to be copied
 *
 *Return: character
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
