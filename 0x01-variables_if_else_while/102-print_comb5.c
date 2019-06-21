#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * all possible combinations of two two digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int x;
	int y;
	int z;

	for (n = '0'; n <= '9'; n++)
	{
		x = n;
		while (x <= '8')
		{
			y = x;
			while (y <= '9')
			{
				z = x + 1;
				while (z <= '9')
				{
					putchar(n);
					putchar(x);
					putchar(' ');
					putchar(y);
					putchar(z);
					if (n != '9' || x != '8' || y != '9' || z != '9')
					{
						putchar(',');
						putchar(' ');
					}
					z++;
				}
				y++;
			}
			x++;
		}
	}
	putchar('\n');
	return (0);
}
