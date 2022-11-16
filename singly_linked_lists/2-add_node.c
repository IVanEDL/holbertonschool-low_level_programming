#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: the head of the list
 * @str: content of the node
 * Return: the address of the new element, null if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = (list_t *) malloc(sizeof(list_t));
	if (node == 00)
		return (NULL);

	node->str = strdup(str);
	node->len = strlen(str);
	node->next = *head;
	*head = node;
	return (*head);
}
