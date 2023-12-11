#include "main.h"

/**
 * _isalpha -Chack for characer are alphabetic
 *@c: the characer
 * Return: 1 if c is letter or 0 anything else
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}

