#include "holberton.h"
/**
 * print_diagonal - draw a diagonal line
 *
 * Description: draw a line
 * @n: number of times
 *
 */
void print_diagonal(int n)
{

	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{;
			for (j = 1; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
