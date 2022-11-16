#include "lists.h"

/**
 * add_node_end - adds a node at the end of a list_t list.
 * @head: head of the list.
 * @str: entry string lenght.
 * Return: address of the new node, null if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));
	char *i;

	if (node == NULL)
		return (NULL);
	i = strdup(str);
	if (i == NULL)
	{
		free(node);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = node;
		node->len = strlen(str);
		node->str = i;
		node->next = NULL;
		return (node);
	}
	node = *head;
	while (node->next != NULL)
		node = node->next;
	node->next = malloc(sizeof(list_t));
	node = node->next;
	node->str = i;
	node->len = strlen(str);
	node->next = NULL;
	return (node);
}
