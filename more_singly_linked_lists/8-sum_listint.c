#include "lists.h"

/**
 * sum_listint - returns the sum of all the data in a listint_t linked list.
 * @head: said list.
 * Return: said sum.
 */

int sum_listint(listint_t *head)
{
	int i = 0, p = 0;

	for (; head != 00; head = head->next, i++)
		p += head->n;
	return (p);
}
