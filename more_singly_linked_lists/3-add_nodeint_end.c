#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a list_t list.
 * @head: head of the list.
 * @n: entry int.
 * Return: address of the new node, null if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = node;
		node->n = n;
		node->next = NULL;
		return (node);
	}
	node = *head;
	while (node->next != NULL)
		node = node->next;
	node->next = malloc(sizeof(listint_t));
	node = node->next;
	node->n = n;
	node->next = NULL;
	return (node);
}
