#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data in a dlistint_t linked list.
 * @head: said list.
 * Return: said sum.
 */

int sum_dlistint(dlistint_t *head)
{
	int i = 0, p = 0;

	for (; head != 00; head = head->next, i++)
		p += head->n;
	return (p);
}
