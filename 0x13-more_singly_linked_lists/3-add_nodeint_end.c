#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 *
 * @head: the list.
 * @n: the value of the new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *EndNode;
	listint_t *FirstNode;

	EndNode = malloc(sizeof(listint_t));
	if (EndNode == NULL)
	{
		return (NULL);
	}

	EndNode->n = n;
	EndNode->next = NULL;

	if (*head == NULL)
	{
		*head = EndNode;
	}
	else
	{
		FirstNode = *head;

		while (FirstNode->next != NULL)
		{
			FirstNode = FirstNode->next;
		}
		FirstNode->next = EndNode;
	}

	return (EndNode);

}
