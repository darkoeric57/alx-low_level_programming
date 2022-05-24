#include <stdio.h>
#include "lists.h"

/**
 * @h: pointer to the list_t list to print
 */

size_t print_list(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		a++;
	}

	return (a);
}
