#include "holberton.h"
/**
 * print_alphabet - print alphabet characters
 *
 * Description: Function to print the lowercase alphabet
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
