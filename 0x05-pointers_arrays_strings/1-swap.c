#include "main.h"

/**
 * swap_int - give two to swap
 * @a: parametr 1
 * @b: parametr 2
 */
void swap_int(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}
