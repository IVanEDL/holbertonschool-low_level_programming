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
	listint_t *tmp = *head, *rm;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		rm = *head;
		*head = (*head)->next;
		free(rm);
		return (1);
	}
	for (; tmp; tmp = tmp->next)
	{
		i++;
	}
	if (index > i)
		return (-1);
	tmp = *head;
	for (i = 0; i < index - 1; i++)
	{
		tmp = tmp->next;
	}
	rm = tmp->next;
	tmp->next = tmp->next->next;
	rm->next = NULL;
	free(rm);
	return (1);

}
