#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to be searched
 * @index:bit index
 *
 * Return:bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}

