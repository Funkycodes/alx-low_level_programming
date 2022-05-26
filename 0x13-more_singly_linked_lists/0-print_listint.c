#include "lists.h"
/**
 * _putchar - print character
 * @c: char to print
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * print_listint - print Elements of a linked list
 * @h: headnode
 * Return: length of list
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		_putchar((h->n) + '0');
		_putchar(10);
		i++;
		h = h->next;
	}
	return (i);
}

