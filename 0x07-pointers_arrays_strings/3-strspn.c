#include "holberton.h"
/**
 * _strspn - locates a character in a string
 *
 * @s: char string
 * @accept: char string
 *
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int length = 0;
	int flag;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				length++;
				flag = 1;
			}
			if (flag == 1)
				continue;
		}
		if (flag == 0)
			break;
	}
	return (length);
}
