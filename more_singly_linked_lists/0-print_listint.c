#include "lists.h"

/**
 * print_listint - prints all the elements of a list_t list.
 * @h: entry list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	for (; h != 00; h = h->next, i++)
	{
		printf("%d", h->n);
		printf("\n");
	}
	return (i);
}
