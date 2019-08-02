#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * *add_node - adds a new node at the beginning of a list
 *
 * @head: pointer to the start of the list
 * @str: string
 *
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *copy = strdup(str);
	unsigned int i;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	{
		new_node->str = copy;
		for (i = 0; copy[i] != '\0'; i++)
			;
		new_node->len = i;
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}
}
