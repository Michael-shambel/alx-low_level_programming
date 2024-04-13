#include "search_algos.h"
/**
 * binary_check - searches for a value in a sorted array of integers
 *                 using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @low: starting index of the array
 * @high: ending index of the array
 * @value: value to search for
 *
 * Return: the index where value is located, or -1 if not found
 */
int binary_check(int *array, size_t low, size_t high, int value)
{
	size_t mid;
	size_t i;

	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
/**
 * exponential_search - searches for a value in a sorted array of integers
 *                      using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t step = 1;
	size_t low;
	size_t high;

	if (array == NULL)
		return (-1);
	while (step < size && array[step] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", step, array[step]);
		step *= 2;
	}

	low = step / 2;
	high = step < size ? step : size - 1;
	if (step < size)
		high = step;
	else
		high = size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	return (binary_check(array, low, high, value));

}
