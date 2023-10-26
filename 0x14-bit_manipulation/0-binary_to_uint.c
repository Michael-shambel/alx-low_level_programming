#include "main.h"
/**
 * binary_to_uint - convert binary number
 * @b: input binary number
 *
 *
 *Return: decimal
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal;
	int  i;

	decimal = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		decimal <<= 1;
		if (b[i] == '1')
			decimal = decimal + 1;
	}
	return (decimal);
}
