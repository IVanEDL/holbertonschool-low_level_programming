#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node of a dlistint_t list
 * @head: head of the linked list
 * @index: the number of the node to be returned
 * Return: said node.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head != NULL; head = head->next, i++)
	{
		if (i == index)
			return (head);
	}
	return (00);
}
