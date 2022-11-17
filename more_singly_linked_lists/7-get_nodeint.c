#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node of a listint_t list
 * @head: head of the linked list
 * @index: the number of the node to be returned
 * Return: said node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head != NULL; head = head->next, i++)
	{
		if (i == index)
			return (head);
	}
	return (00);
}
