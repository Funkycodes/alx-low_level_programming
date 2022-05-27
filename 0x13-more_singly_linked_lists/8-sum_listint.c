#include "lists.h"
/**
 * sum_listint - compute sum of data of linkedlist
 * @head: parameter
 * Return: sum, 0 if empty
 */
int sum_listint(listint_t *head)
{
	int sum;
	sum=0;

	if (head == NULL)
		return (0);
	while(head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
