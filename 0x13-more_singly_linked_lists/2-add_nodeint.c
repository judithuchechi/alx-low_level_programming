#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning of listint_t list
 *
 * @head: head of list
 * @n: value of new node
 *
 * Return: address of new element added of NULL if function fails.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *NewNode;

	NewNode = malloc(sizeof(listint_t));
	if (NewNode == NULL)
	{
		return (NULL);
	}

	NewNode->n = n;
	NewNode->next = *head;
	*head = NewNode;

	return (NewNode);

}
