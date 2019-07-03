#include "holberton.h"
/**
 * rev_string - reverse a string
 *
 * @s: Pointer char String
 */
void rev_string(char *s)
{
	int i;
	int length = sizeof(s);
	char *start, *end, ch;

	start = s;
	end = s;

	for (i = 0; i < length; i++)
	{
		end++;
	}
	for (i = 0; i < length / 2; i++)
	{
		ch = *end;
		*end = *start;
		*start = ch;

		start++;
		end--;
	}
}
