#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a listint_t list.
 * @head: the head of the list
 * @n: content of the node
 * Return: the address of the new element, null if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (node == 00)
		return (NULL);

	node->n = n;
	node->next = NULL;
	node->prev = NULL;
	if (!(*head))
	{
		*head = node;
		return (node);
	}
	node->next = *head;
	(*head)->prev = node;
	*head = node;
	return (node);
}
