#include "lists.h"

/**
 * free_listint - frees a list_t list
 * @head: pointer to the head of the list
 * Return: negativo master
 */

void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free_listint(head->next);
		free(head);
	}
}
