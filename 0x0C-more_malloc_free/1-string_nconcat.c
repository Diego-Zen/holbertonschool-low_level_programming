#include "holberton.h"
#include <stdlib.h>
/**
 * *string_nconcat - concatenates two strings
 *
 * @s1: first string char
 * @s2: second string char
 * @n: size integer
 *
 * Return: pointer or null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ch;
	int i, j, size;

	if (s1 == NULL)
		s1 = '';
	if (s2 == NULL)
		s2 = '';

	size = 0;
	if (n >= sizeof(s2))
	{
		ch = malloc(n * sizeof(s1) + sizeof(s2) - 1);
		if (ch == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; s[i] != '\0'; i++)
				ch[i] = s1[i];
			for (j = 0; s[j] != '\0'; j++)
			{
				ch[i] = s2[j];
				i++;
			}
			return (ch);
		}
	}
	else
	{
		s = malloc(n * sizeof(s1) + n);
		if (s == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; s1[i] != '\0'; i++)
			{
				ch[i] = s1[i];
			}
			for (j = 0; j < n; j++)
			{
				ch[i] = s2[j];
				i++;
			}
			return (ch);
		}
	}
}
