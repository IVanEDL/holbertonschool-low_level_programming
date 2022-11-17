#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node index in a linked list.
 * @head: the linked list.
 * @index: the position of the node to be deleted.
 * Return: 1 if succesful, -1 if not.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *p = *head, *aux;

	if (*head == 00)
		return (-1);
	if (index == 0) /*If is to be erased the head node*/
	{
		aux = *head;
		*head = (*head)->next;
		free(aux);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (i == 0 && index == 1)
		{
			*head = (*head)->next;
			free(p);
		}
		else
		{
			if (i == index - 1 && p != 00)
			{
				aux->next = p->next;
				free(p);
			}
			else
			{
				aux = p;
				if (aux == 00)
					break;
				p = p->next;
			}
		}
	}
	if (i < index)
		return (-1);
	return (1);
}
