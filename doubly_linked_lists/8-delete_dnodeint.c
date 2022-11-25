#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a certain node of a listint_t list.
 * @head: head of the list.
 * @index: position of the deleted node
 * Return: 1 if succesful, -1 if not.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = *head, *ant, *sig;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next, (*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	for (; tmp; tmp = tmp->next)
		i++;
	if (index > i)
		return (-1);
	tmp = *head;
	for (i = 0; i < index; i++)
		tmp = tmp->next;
	if (!tmp->prev && !tmp->next)
	{
		free(tmp);
		return (1);
	}
	if (!tmp->prev && tmp->next)
	{
		sig = delete->next, sig->prev = NULL, tmp->next = NULL;
		free(tmp);
		return (1);
	}
	if (!tmp->next && tmp->prev)
	{
		ant = tmp->prev, ant->next = NULL, tmp->prev = NULL;
		free(tmp);
		return (1);
	}
	ant = tmp->prev, sig = tmp->next, sig->prev = ant;
	ant->next = sig, tmp->next = NULL, tmp->prev = NULL, free(tmp);
	return (1);		
}
