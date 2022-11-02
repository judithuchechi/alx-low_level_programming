#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 *
 * @head: head node and double pointer to the list_t list.
 * @str: string to be put in new node.
 *
 * Return: address of new element or NULL if function fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *NewNode;
	list_t *ListHead;
	char *String;

	int len = 0;

	NewNode = malloc(sizeof(list_t));
	if (NewNode == NULL)
		return (NULL);

	String = strdup(str);
	if (String == NULL)
		free(NewNode);
		return (NULL);

	for (len = 0; str[len];)
		len++;

	NewNode->str = String;
	NewNode->len = len;
	NewNode->next = NULL;

	if (*head == NULL)
		*head = NewNode;
	else
	{
		ListHead = *head;
		while (ListHead->next != NULL)
		{
			ListHead = ListHead->next;
		}

		ListHead->next = NewNode;
	}
	return (NewNode);
}
