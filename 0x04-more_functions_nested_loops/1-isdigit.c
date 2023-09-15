#include "main.h"

/**
 * _isdigit - check the input weather it is digit or not
 *@c: take input
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
