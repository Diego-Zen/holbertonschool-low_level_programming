#include "holberton.h"
/**
 * print_triangle - print a triangle
 *
 * @size: size integer
 *
 */
void print_triangle(int size)
{

	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size; j > 0; j--)
			{
				if (j <= i)
					_putchar(35);
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
