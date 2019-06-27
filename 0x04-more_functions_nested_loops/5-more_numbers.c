#include "holberton.h"
/**
 * more_numbers - print 10 times the numbers form 0 to 14
 *
 * Description: Print numbers
 *
 */
void more_numbers(void)
{

	int i, j, x, y;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			x = j / 10;
			y = j % 10;
			if (x != 0)
				_putchar(x + '0');
			_putchar(y + '0');
		}
		_putchar('\n');
	}
}
