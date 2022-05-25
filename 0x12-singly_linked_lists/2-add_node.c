#include "lists.h"
#include <string.h>
#include <stdlib.h>

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	if (str == NULL)
		return NULL;
	if ((strdup(str)) == NULL)
		return NULL;

	newNode = malloc(sizeof *newNode);
	newNode->len = _strlen(str);
	newNode->str = strdup(str);

	if(head == NULL)
		newNode->next = NULL;
	else
		newNode->next = *head;
	*head = newNode;

	return (newNode);


}
