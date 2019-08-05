#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * *add_node_end - adds a new node at the end of a list
 *
 * @head: pointer to the start of the list
 * @str: string
 *
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current = *head;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _len(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (current->next != NULL)
		current = current->next;

	current->next = new_node;
	return (new_node);
}
/**
 * _len - length of the string
 *
 * @str: string
 *
 * Return: Integer
 */
int _len(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	return (i);
}
