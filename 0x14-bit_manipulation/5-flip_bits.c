#include "main.h"

/**
 *flip_bits - return number of bits fliped
 *@n: first number
 *@m: second number
 *
 *
 *Return: int of value
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	int flipbit = 0;
	unsigned long int now;
	unsigned int exor = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		now = exor >> i;
		if (now & 1)
			flipbit++;
	}
	return (flipbit);
}
