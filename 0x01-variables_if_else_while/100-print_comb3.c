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

	for (n = '0'; n <= '9'; n++)
	{
		x = n;
		if (x > 0)
		{
			x++;
		}
		while (x <= '9')
		{
			putchar(n);
			putchar(x);
			if (n != '8' || x != '9')
			{
				putchar(',');
				putchar(' ');
			}
			x++;
		}
	}
	putchar('\n');
	return (0);
}
