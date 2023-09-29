#include "main.h"

/**
 * _pow_recursion - return the power of x and y
 *@x: the value of mult
 *@y: the value of power
 * Return: the power of x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
