#include "holberton.h"
/**
 * jack_bauer - Print every minute of the day
 * Description: The day of jack bauer
 */
void jack_bauer(void)
{
	int n;
	int x;
	int y;
	int z;
	int val;

	for (n = '0'; n <= '2'; n++)
	{
		for (x = '0'; x <= '9'; x++)
		{
			val++;
			for (y = '0'; y <= '5'; y++)
			{
				for (z = '0'; z <= '9'; z++)
				{
					if (val <= 24)
					{
						_putchar(n);
						_putchar(x);
						_putchar(':');
						_putchar(y);
						_putchar(z);
						_putchar('\n');
					}
				}
			}
		}
	}
}
