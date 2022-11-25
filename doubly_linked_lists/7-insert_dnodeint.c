#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node in a given position in a list.
 * @h: said linked list.
 * @idx: said position.
 * @n: data of the node.
 * Return: the new node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *p = malloc(sizeof(dlistint_t));
	dlistint_t *a = *h;
	dlistint_t *r = *h;

	if ((*h) == NULL)
	{
		*h = p, p->next = NULL, p->prev = NULL, p->n = n;
		return (p);
	}
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
	if (a != NULL)
		a = a->next;
	else
		return (NULL);
	for (i = 1; a && i < idx; i++, a = a->next, r = r->next)
	{
	}
	if (idx == i)
	{
		r->next = p;
		p->next = a;
		if (a)
			a->prev = p;
		p->prev = r;
		return (p);
	}
	return (00);
}
