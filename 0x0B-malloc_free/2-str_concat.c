#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings
 *
 * @s1: string
 * @s2: string
 *
 * Return: pointer or null
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	int size1, size2;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size1 = size(s1);
	size2 = size(s2) + 1;

	s = malloc((size1 * sizeof(char)) + (size2 * sizeof(char)));
	if (s == '\0')
	{
		return ('\0');
	}
	else
	{
		for (i = 0; i < size1; i++)
		{
			s[i] = s1[i];
		}
		for (j = 0; j < size2; j++)
		{
			s[i] = s2[j];
			i++;
		}
		return (s);
	}
	free(s);
}

/**
 * size - Return the size of a string
 *
 * @str: string
 *
 * Return: integer size of string
 */
int size(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
