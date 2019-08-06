#include "lists.h"

/**
 * get_nodeint_at_index - find the nth node of a linked list
 *
 * @head: pointer to list
 * @index: node
 *
 * Return: the index node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (i == index)
			return (current);
		current = current->next;
		i++;
	}
	return (NULL);
}
