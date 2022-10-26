#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listin_t list.
 *
 * @h: the list
 *
 * Return: the number of elements in the list.
 */

size_t listint_len(const listint_t *h)
{
	size_t b = 0;

	while (h)
	{
		h = h->next;
		b++;
	}
	return (b);
}
