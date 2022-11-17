#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: node to be deleted (f :c)
 * Return: heads node data
 */

int pop_listint(listint_t **head)
{
	listint_t *aux = *head;
	int i;

	if (*head)
	{
		i = (*head)->n;
		*head = (*head)->next;
		free(aux);
	}
	return (i);
}
