#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list
 * Return: negativo master
 */

void free_list(list_t *head)
{
	if (head != NULL)
	{
		free_list(head->next);
		if (head->str != NULL)
			free(head->str);
		free(head);
	}
}
