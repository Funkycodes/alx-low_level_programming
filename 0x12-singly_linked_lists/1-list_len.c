#include <stdio.h>
#include "lists.h"

/**
 * list_len - computes the number of elements in a list
 * @h: pointer to linked list head
 * Return: amount of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
