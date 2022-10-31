#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds new node at the beginning of a linked list.
 *
 * @head: double pointer to the list_t list.
 * @str: new string to add in the node.
 *
 * Return: address of the new element or NULL if function fails.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *NewElement;
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}
	NewElement = malloc(sizeof(list_t));
	if (!NewElement)
	{
		return (NULL);
	}

	NewElement->str = strdup(str);
	NewElement->len = len;
	NewElement->next = (*head);
	(*head) = NewElement;

	return (*head);
}
