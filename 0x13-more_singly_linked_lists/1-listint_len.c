#include "lists.h"

/**
 * listint_len - number of elements in a list
 *
 * @h: list
 *
 * Return: the number of elements of a list
 */
size_t listint_len(const listint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
		h = h->next;

	return (i);
}
