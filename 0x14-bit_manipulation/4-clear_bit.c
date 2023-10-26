#include "main.h"

/**
 *clear_bit - clear bit value
 *@n: parameter
 *@index: index value og bit to be clear
 *
 * Return: integer
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int clear;

	clear = 1;
	clear = clear << index;
	if (index > sizeof(unsigned int) * 8)
		return (-1);
	if (((*n >> index) & 1) == 1)
		*n = clear ^ *n;
	return (1);
}
