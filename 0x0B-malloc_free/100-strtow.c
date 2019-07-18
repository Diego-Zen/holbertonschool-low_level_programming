#include "holberton.h"
#include <stdlib.h>
/**
 * **strtow - splits a string into words
 *
 * @str: char string
 *
 * Return: pointer or null
 */
char **strtow(char *str)
{
	char **s;

	if (str == NULL)
	{
		return ('\0');
	}
	else
	{
		s = malloc(4 * sizeof(char));

		if (s == NULL)
		{
			return ('\0');
		}
		else
		{
			return (s);
		}
	}
}
