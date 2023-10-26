#include "main.h"

/**
 *get_bit - it will get the bit value of decimal
 *@n: input decimal
 *@index:  the index of bit
 *
 * Return: integer
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int x;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	for (x = 0; x < index; x++)
		n = n >> 1;
	return ((n & 1));
}
