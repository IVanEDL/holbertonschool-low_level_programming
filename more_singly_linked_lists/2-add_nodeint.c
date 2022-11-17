#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: the head of the list
 * @n: content of the node
 * Return: the address of the new element, null if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = (listint_t *) malloc(sizeof(listint_t));
	if (node == 00)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;
	return (*head);
}
