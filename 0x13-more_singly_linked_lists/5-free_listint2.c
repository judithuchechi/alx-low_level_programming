#include "lists.h"

/**
 * free_listint2 - frees listint_t list and sets head to NULL.
 *
 * @head: list to be freed.
 */

void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
	}

	head = NULL;

}
