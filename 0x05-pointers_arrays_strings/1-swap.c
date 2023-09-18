#include "main.h"

/**
 *swap_int - swap to integers
 *@a: firs intiger
 *@b: second intiger
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
