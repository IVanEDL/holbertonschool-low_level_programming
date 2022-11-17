#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node in a linked list at an n position.
 * @head: said linked list.
 * @idx: said position.
 * @n: data of the node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *p = malloc(sizeof(listint_t));
	listint_t *a = *head;

	if (p == 00)
		return (00); /*checks for malloc fails*/
	p->n = n;
	if (idx == 0) /*executes in case of idx being head itself*/
	{
		p->next = *head;
		*head = p;
		return (p);
	}
	for (; a != 00; a = a->next, i++)
	{
		if (i == idx - 1)
		{
			p->next = a->next;
			a->next = p;
		}
	}
	if (idx > i)
		return (00);
	return (p);
}
