#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * all possible combinations of double digit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int x;
	int y;

	for (n = '0'; n <= '7'; n++)
	{
		x = n + 1;
		while (x <= '8')
		{
			y = x + 1;
			while (y <= '9')
			{
				putchar(n);
				putchar(x);
				putchar(y);
				if (n != '7' || x != '8' || y != '9')
				{
					putchar(',');
					putchar(' ');
				}
				y++;
			}
			x++;
		}
	}
	putchar('\n');
	return (0);
}
