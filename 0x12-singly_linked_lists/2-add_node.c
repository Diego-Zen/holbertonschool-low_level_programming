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

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = _len(str);
	new_node->next = *head;
	*head = new_node;
	return (*head);
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
