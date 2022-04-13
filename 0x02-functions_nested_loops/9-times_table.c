#include "main.h"

/**
 * times_table - prints the multiplication of number 0-9
 */

void times_table(void)
{
	int table = 0;
	int multiplier = 0;

	while (table < 10)
	{
		while (multiplier < 10)
		{
			_putchar('0' + table * multiplier);
			_putchar(',');
			_putchar(' ');
			multiplier++;
		}
		multiplier = 0;
		table++;
	}
}
