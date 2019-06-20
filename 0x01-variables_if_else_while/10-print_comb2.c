#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * combinations of double digit 00 to 99
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int x;

	for (n = '0'; n <= '9'; n++)
	{
		for (x = '0'; x <= '9'; x++)
		{
			putchar(n);
			putchar(x);
			if (n != '9' || x != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
