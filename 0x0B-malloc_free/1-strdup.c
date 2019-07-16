#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - returns a pointer containing a copy
 *
 * @str: string
 *
 * Return: Success
 */
char *_strdup(char *str)
{
	int i;
	int size;
	char *s;

	if (str == NULL)
	{
		return ('\0');
	}
	else
	{
		for (size = 0; str[size] != '\0'; size++)
			;

		s = malloc(size * sizeof(char));
		for (i = 0; i < size; i++)
		{
			s[i] = str[i];
		}
		return (s);
	}
}
