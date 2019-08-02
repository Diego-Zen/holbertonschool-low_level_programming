#include "lists.h"
#include <stdio.h>
/**
 * list_len - number of elements in a linked list
 *
 * @h: pointer to the start of the list
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	const list_t *current = h;
	size_t i;

	for (i = 0; current != NULL; i++)
	{
		if (current->str == NULL)
			printf("[%d] (nil)\n", current->len);
		current = current->next;
	}
	return (i);
}
