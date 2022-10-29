#include "lists.h"

/**
 * pop_listint - deletes the head node and returns the head node's data, 'n'.
 *
 * @head: the list.
 *
 * Return: 'n'; or 0 if list is empty.
 */

int pop_listint(listint_t **head)
{
	int data; /* head node's data */
	listint_t *NewNode;

	if (*head == 0)
	{
		return (0);
	}

	NewNode = *head;
	data = (*head)->n;
	*head = (*head)->next;
	free(NewNode);
	return (data);
}


