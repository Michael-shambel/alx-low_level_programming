#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - allocate two dimentional array
 * @width: width of an array
 * @height: height of an array
 *
 * Return: two diamensional array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **twod;

	if (width <= 0 || height <= 0)
		return (NULL);
	twod = malloc(sizeof(int *) * height);
	if (twod == NULL)
	{
		return (NULL);
	}
	i = 0;
	j = 0;
	while (i < height)
	{
		twod[i] = malloc(sizeof(int) * width);

		if (twod[i] == NULL)
		{
			for (; i >= 0; i--)
				free(twod[i]);
			free(twod);
			return (NULL);
		}
		i++;
	}
	while (i < height)
	{
		while (j < width)
		{
			twod[i][j] = 0;
			j++;
		}
		i++;
	}
	return (twod);
}
