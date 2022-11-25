#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlist_t list.
 * @h: entry list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	for (; h != 00; h = h->next, i++)
	{
		printf("%d", h->n);
		printf("\n");
	}
	return (i);
}
