#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 *
 * @head: the list.
 * @idx: index of list where node is to be added.
 * @n: value of n.
 *
 * Return: address of new node or NULL if function fails.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int iterate = 0;
	listint_t *prevNode;
	listint_t *NewNode;

	NewNode = malloc(sizeof(listint_t));
	if (NewNode == NULL)
	{
		return (NULL);
	}

	NewNode->n = n;

	if (idx == 0)
	{
		NewNode->next = *head;
		*head = NewNode;
		return (NewNode);
	}

	prevNode = *head;
	while (prevNode)
	{
		if (iterate == (idx - 1))
		{
			NewNode->next = prevNode->next;
			prevNode->next = NewNode;
			return (NewNode);
		}

		prevNode = prevNode->next;
		iterate++;
	}

	return (NULL);
}
