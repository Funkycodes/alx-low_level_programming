#include "lists.h"

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof *newnode);
	listint_t *node;
	
	node = *head;
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while ((node->next) != NULL)
	{
		node=node->next;	
	}
	node->next = newnode;
	
	return newnode;	
}
