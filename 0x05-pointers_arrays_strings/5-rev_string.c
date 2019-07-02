#include "holberton.h"
/**
 * rev_string - reverse a string
 *
 * @s: Pointer char
 */
void rev_string(char *s)
{
	int x = 0;
	int i = 0;
	int j = 0;
	char ch[1000];

	while (s[i] != '\0')
	{
		i++;
		if (s[i] == '\0')
		{
			j = i - 1;
			while (j >= 0)
			{
				ch[x] = s[j];
				j--;
				x++;
				_putchar(ch[x]);
			}
		}
	}
}
