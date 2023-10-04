#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - new memory space allocator
 *@str: allocate char
 * Return: Alx
 */
char *_strdup(char *str)
{
	char *alx;
	int i = 0, j = 0;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	alx = malloc(sizeof(char) * (i + 1));
	while (str[j])
	{
		alx[j] = str[j];
		j++;
	}
	return (alx);
}
