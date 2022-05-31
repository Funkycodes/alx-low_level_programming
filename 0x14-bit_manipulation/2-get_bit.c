#include "main.h"

/**
 * get_bit - get bit at specified index
 * @n number
 * @index : index starting from rightmost
 * Return bit 0 or 1 or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned int total_bits;
	/*Check if specified index exists for number*/
	total_bits = (sizeof(max_bits)) * 8;
	if (index > total_bits)
		return (-1);
	bit = ((n & (1 << index)) >> index);
	return (bit);
}
