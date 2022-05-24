#include <stdlib.h>
#include "lists.h"

/**
 * @h: pointer to the list_t list
 */

size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}
	return (a);
}
