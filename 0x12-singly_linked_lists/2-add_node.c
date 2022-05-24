#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *a;
	unsigned int len = 0;

	while (str[len])
		len++;

	a = malloc(sizeof(list_t));
	if (!a)
		return (NULL);

	a->str = strdup(str);
	a->len = len;
	a->next = (*head);
	(*head) = a;

	return (*head);
}
