#include "main.h"

/**
 *set_bit - set the bit number
 *@n: bit to be manipulated
 *@index: the bit to be manipulated
 *
 * Return: 0 or 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (index > (sizeof(unsigned int) * 8))
		return (-1);

	bit = 1 << index;
	*n = *n | bit;
	return (1);
}
