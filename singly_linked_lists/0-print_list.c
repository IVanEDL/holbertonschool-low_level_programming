#include "lists.h"

/*
 * 
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	for (; h != 00; h = h->next, i++)
	{
		printf("[%d] %s", h->str == 00 ? 0 : h->len, 
				h->str == 00 ? "(nil)" : h->str);
		printf("\n");
	}
	return (i);
}
