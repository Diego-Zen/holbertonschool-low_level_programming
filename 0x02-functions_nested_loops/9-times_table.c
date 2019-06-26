#include "holberton.h"
/**
 * times_table - Prints the nine table
 * Description: Stats from 0
 */
void times_table(void)
{
	int i;
	int j;
	int n;
	int x;
	int y;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');
			n = i * j;
			if (n <= 9)
			{
				_putchar(' ');
				_putchar(n + '0');
			}
			else
			{
				x = n / 10;
				y = n % 10;
				_putchar(x + '0');
				_putchar(y + '0');
			}
		}
		_putchar('\n');
	}
}
