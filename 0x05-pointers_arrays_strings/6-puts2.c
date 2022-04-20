#include "main.h"

/**
 * puts2 - print every other character of a string
 * @str: string to be used as parramter
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
			i++;
		}
		else
		{
			i++;
			continue;
		}

	}
	_putchar(10);
}
