#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: pointer to list
 * @idx: index
 * @n: integer value
 *
 * Return: the address of the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head;
	unsigned int i = 0;
	listint_t *old;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	new_node->n = n;
	new_node->next = NULL;

	while (current != NULL)
	{
		if (i == idx)
		{
			old->next = new_node;
			new_node->next = current;
			return (new_node);
		}
		old = current;
		current = current->next;
		i++;
	}
	return (NULL);
}
