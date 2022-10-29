#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 *
 * @head: the first node of the linked list.
 *
 * @index: index of node to be returned.
 *
 * Return: nth node or NULL if node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int iterate;

	iterate = 0;
	if (head == NULL)
	{
		return (NULL);
	}

	while (head)
	{
		if (iterate == index)
		{
			return (head);
		}
		iterate++;
		head = head->next;
	}

	return (NULL);
}
