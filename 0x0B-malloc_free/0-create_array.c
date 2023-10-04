#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array
 * @size: size of array
 * @c: char o be filled an array
 *
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *j;

	if (size == 0)
		return (NULL);
	j = malloc(size * sizeof(char));

	if (j == NULL)
		return (NULL);
	while (i < size)
	{
		j[i] = c;
		i++;
	}
	return (j);
}
