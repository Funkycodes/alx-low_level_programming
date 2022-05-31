#include "main.h"
/**
 * print_binary - prints binary form of a number
 * @n: unsigned int
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int len =0;
	unsigned long int copy = n, mask = 1;

	while (copy > 0)
	{
		copy >>= 1;
		++len;
	}
	--len;
	if (len>0)
		mask = mask << len;
	while (mask > 0)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');
		mask >>= 1;
	}
}
