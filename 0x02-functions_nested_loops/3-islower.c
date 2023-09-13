#include "main.h"

/**
 * _islower - Checks for lowercase character
 *@c: The character to be chacked
 * Return: 1 for lowercase characer or 0 for anyhing else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
