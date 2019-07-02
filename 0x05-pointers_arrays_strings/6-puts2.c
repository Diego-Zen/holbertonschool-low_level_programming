#include "holberton.h"
/**
 * puts2 - prints one char out of a string
 *
 * @str: Pointer char
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 2;
		if (str[i] == '\0')
			_putchar('\0');
	}
	_putchar('\n');
}
