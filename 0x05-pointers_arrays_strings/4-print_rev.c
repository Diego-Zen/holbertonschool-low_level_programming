#include "holberton.h"
/**
 * print_rev - prints a string in reverse
 *
 * @s: Pointer char
 */
void print_rev(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
		if (s[i] == '\0')
		{
			j = i - 1;
			while (j >= 0)
			{
				_putchar(s[j]);
				j--;
			}
		}
	}
	_putchar('\n');
}
