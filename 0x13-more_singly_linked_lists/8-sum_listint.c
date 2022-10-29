#include "lists.h"

/**
 * sum_listint - return the sum of all the data of a listint_t linked list.
 *
 * @head: the list.
 * Return: sum, otherwise 0 if list is empty.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head)
	{
		sum = sum + (head->n);
		/* or sum+=head->n */
		head = head->next;
	}

	return (sum);
}

