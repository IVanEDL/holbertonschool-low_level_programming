#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of a list_t list.
 * @head: head of the list.
 * @n: entry int.
 * Return: address of the new node, null if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t)), *temp = *head;

	if (node == NULL)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	node->next = NULL;
	if ((*head) == NULL)
	{
		*head = node;
		return (node);
	}
	else
	{
		temp = *head;
		while (temp->next != 00)
			temp = temp->next;
		temp->next = node;
		node->prev = temp;
		return (node);
	}
}
