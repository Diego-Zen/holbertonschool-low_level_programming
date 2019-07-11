#include "holberton.h"
/**
 * wildcmp - compares two strings
 *
 * @s1: char string
 * @s2: char string
 *
 * Return: integer
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
}
