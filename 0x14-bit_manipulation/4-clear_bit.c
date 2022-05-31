#include "main.h"

/**
 * clear_bit - clear bit to 0 at given index
 * @n: number
 * @index: index within memotry rep of n
 * Return: 1 if successful, -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int total_bits, mask;

	mask = 1;
	total_bits = (sizeof(total_bits) * 6);

	if (index > total_bits)
		return (-1);

	mask = ~(mask << index);
	*n &= mask;

	return (1);
}
