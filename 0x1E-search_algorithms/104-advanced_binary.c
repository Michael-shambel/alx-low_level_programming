#include "search_algos.h"
/**
 *binary_recursive - binary recursive search to find the first element
 *@array: pointer to the first element of the array to search in
 *@left: the left side of the array
 *@right: right side of th earray
 *@value: value to search for
 *
 *Return: the first index where value is located, or -1 if not found
 */
int binary_recursive(int *array, size_t left, size_t right, int value)
{
	int mid;
	size_t i;

	if (left <= right)
	{
		mid = left + (right - left) / 2;
		printf("Serching in array: ");
		for (i = left ; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
		{
			if (mid == 0 || array[mid - 1] != value)
			{
				return (mid);
			}
			else
				return (binary_recursive(array, left, mid, value));
		}
		else if (array[mid] > value)
			return (binary_recursive(array, left, mid - 1, value));
		else
			return (binary_recursive(array, mid + 1, right, value));
	}
	return (-1);
}
/**
 * advanced_binary - binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t left  = 0;
	size_t right  = size - 1;

	if (array == NULL)
		return (-1);

	return (binary_recursive(array, left, right, value));
}
