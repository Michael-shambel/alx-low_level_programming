#include "main.h"

/**
 * factorial - print factorial of a number
 *@n: inpu number
 * Return: facotorial of number
 */
int factorial(int n)
{
	if (n < 0)
		return(-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
