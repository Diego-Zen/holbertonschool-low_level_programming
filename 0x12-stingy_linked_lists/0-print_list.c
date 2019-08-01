#include "lists.h"
#include <stdio.h>
/**
 * print_list - return the number of nodes
 *
 * @h: pointer to the start of the list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t i;

	for (i = 0; current != NULL; i++)
	{
		if (current->str == NULL)
			printf("[%d] (nil)\n", current->len);
		else
			printf("[%d] %s\n", current->len, current->str);
		current = current->next;
	}
	return (i);
}
