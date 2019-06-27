#include "holberton.h"
/**
 * print_square - print a square
 *
 * Description: print a hastag square
 * @size: size integer
 *
 */
void print_square(int size)
{

	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
