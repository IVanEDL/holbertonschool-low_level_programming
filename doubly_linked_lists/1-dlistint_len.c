#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlist_t list.
 * @h: entry list
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != 00)
	{
		i++;
		h = h->next;
	}
	return (i);
}
