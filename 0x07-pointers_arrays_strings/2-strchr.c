#include "holberton.h"
/**
 * *_strchr - locates a character in a string
 *
 * @s: char string
 * @c: char character
 *
 * Return: char
 */
char *_strchr(char *s, char c)
{
	int i;
	char *loc;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			loc = &s[i];
			break;
		}
	}
	return (loc);
}
