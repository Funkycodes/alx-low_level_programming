#include "main.h"

/**
 * set_bit - get bit at specified index
 * @n: number
 * @index: index starting from rightmost
 * Return: bit 0 or 1 or -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int bit;
	unsigned long int total_bits;
	/*Check if specified index exists for number*/
	total_bits = (sizeof(total_bits)) * 8;
	if (index > total_bits)
		return (-1);
	bit = (n ! (1 << index));
	return (bit);
}
