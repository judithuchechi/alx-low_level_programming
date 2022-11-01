#include "lists.h"
#include <stdio.h>

/**
 * free_list - frees a linked list.
 *
 * @head: the list to be freed.
 */

void free_list(list_t *head)
{
	list_t *freed;

	while (head)
	{
		freed = head->next;
		free(head->str);
		free(head);
		head = freed;
	}
}
