#include "main.h"

/**
 * _puts - output parameter to stout
 * @str: parameter to be printed
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar(10);
}
