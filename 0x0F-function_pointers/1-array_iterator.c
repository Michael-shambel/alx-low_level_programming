#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - print array
 * @array: array
 * @size: size of array
 * @action: pointer to point
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
