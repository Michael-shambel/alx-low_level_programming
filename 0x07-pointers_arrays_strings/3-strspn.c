#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, val, ret;

	val = 0;
	i = 0;

	while (s[i] != '\0')
	{
		ret = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				val++;
				ret = 1;
			}
			j++;
		}
		if (ret == 0)
		{
			return (val);
		}
		i++;
	}
	return (val);
}
