#include "lists.h"

/**
 * *reverse_listint - reverses a list
 *
 * @head: pointer to list
 *
 * Return: a pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current;
	listint_t *prev;

	if (head == NULL || *head == NULL)
		return (NULL);

	prev = *head;
	current = (*head)->next;
	*head = (*head)->next;
	prev->next = NULL;

	while (*head != NULL)
	{
		*head = (*head)->next;
		current->next = prev;
		prev = current;
		current = *head;
	}
	*head = prev;
	return (*head);
}
