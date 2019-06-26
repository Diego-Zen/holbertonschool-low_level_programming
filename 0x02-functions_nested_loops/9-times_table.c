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
		for (j = 0; j <= 9; j++)
		{
			n = i * j;
			if (n <= 9)
			{
				_putchar(n + '0');
			}
			else
			{
				x = n / 10;
				y = n % 10;
				_putchar(x + '0');
				_putchar(y + '0');
			}
			if (j < 9 && n <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			if (j < 9 && n > 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
