#include "lists.h"

int pop_listint(listint_t **head)
{
	listint_t *newhead;
	int r;

	if (*head == NULL)
		return (0);
	newhead = *head;
	r = newhead->n;
	*head = newhead->next;
	free(newhead);

	return (r);
}
