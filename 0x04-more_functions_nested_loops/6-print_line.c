#include "holberton.h"
/**
 * print_line - draw a straight line
 *
 * Description: draw a line
 * @n: number of times
 */
void print_line(int n)
{

	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
