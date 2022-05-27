#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a newnode at the specified index
 * @head: list
 * @idx: index
 * @n : data for new node
 * Return: Adress of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode = malloc(sizeof *newnode);
	listint_t *node;
	int j;

	if (head == NULL)
		return (NULL);
	if (newnode == NULL)
		return (NULL);
	node = *head;
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = node; 
		*head = newnode;
		return newnode;
	}
	for (j = 0; j < idx - 1;j++)
	{
		node=node->next;
		if (node == NULL)
		{
			free(newnode);
			return (NULL);
		}
	}
	newnode->next = node->next;
	node->next = newnode;
	return (newnode);
}
