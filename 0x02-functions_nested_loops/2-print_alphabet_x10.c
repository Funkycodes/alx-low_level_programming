#include "main.h"

/**
 * print_alphabet_x10 - print alphabet in lowercase followed by a newline
 * Return: void
 */
void print_alphabet_x10(void)
{
	char alpha;
	int cnt = 1;

	while (cnt <= 10)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		cnt++;
	}
}
