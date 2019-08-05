#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * free_list - free a list
 *
 * @head: pointer to the start of the list
 *
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = current->next;
		free(current->str);
		free(current);
	}
}
