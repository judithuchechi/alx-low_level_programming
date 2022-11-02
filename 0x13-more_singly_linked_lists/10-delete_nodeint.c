#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at the index of a linked list.
 *
 * @head: the list.
 * @index: the index.
 *
 * Return: 1 on success or -1 if it fails.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *NewHead = *head;
	listint_t *temp;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (NewHead)
	{
		if (count == index - 1)
		{
			temp = NewHead->next;
			NewHead->next = temp->next;
			free(temp);
			return (1);
		}
		count++;
		NewHead = NewHead->next;
	}

	return (-1);

}


