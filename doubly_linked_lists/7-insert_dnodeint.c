#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node in a given position in a list.
 * @h: said linked list.
 * @idx: said position.
 * @n: data of the node.
 * Return: the new node.
 */

dlistint_t *insert_dnodeint_at_index(listint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *p = malloc(sizeof(listint_t));
	dlistint_t *a = *h;
	dlistint_t *r = *h;

	if ((*h) == NULL)
		return (00);
	if (p == 00)
		return (00); /*checks for malloc fails*/
	p->n = n;
	if (idx == 0) /*executes in case of idx being head itself*/
	{
		*h = p;
		p->next = a;
		if (a != 00)
			a->prev = p;
		p->prev = NULL;
		return (p);
	}
	for (i = 1; a != 00 && i < idx; a = a->next, r = r->next, i++)
	{
	}
	if (idx == i)
	{
		r->next = p;
		p->next = a;
		if (a != NULL)
			a->prev = p;
		p->prev = r;
		return (p);
	}
	return (00);
}
