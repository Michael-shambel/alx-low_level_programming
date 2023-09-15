#include "main.h"

/**
 * _isupper - check weather the character is capital or small
 *@c: take the character
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
