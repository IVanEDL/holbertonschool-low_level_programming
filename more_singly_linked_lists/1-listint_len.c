#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list_t list.
 * @h: entry list
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != 00)
	{
		i++;
		h = h->next;
	}
	return (i);
}
