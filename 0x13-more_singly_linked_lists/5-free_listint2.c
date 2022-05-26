#include "main.h"

/**
 * free_listint2 - frees a linked list
 * @head: linkedlist
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (*head == NULL)
		return NULL;
	while(*head)
	{
		ptr = *head;
		*head = ptr->next;
		free(ptr);
	}

}
