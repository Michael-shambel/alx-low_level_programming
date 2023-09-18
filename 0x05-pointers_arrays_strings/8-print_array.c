#include "main.h"
#include <stdio.h>

/**
 * print_array - print array value
 *@a: value of int
 *@n: value of int n
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
