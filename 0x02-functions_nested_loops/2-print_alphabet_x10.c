#include "holberton.h"
/**
 * print_alphabet_x10 - print alphabet characters ten times
 *
 * Description: Function to print the lowercase alphabet ten times
 */
void print_alphabet_x10(void)
{
	char ch;
	int n;

	for (n = 0; n <= 9; n++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
