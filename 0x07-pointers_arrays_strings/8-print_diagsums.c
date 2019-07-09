#include <stdio.h>
#include "holberton.h"
/**
 * print_diagsums - Prints the sum of the two diagonals
 *
 * @a: int
 * @size: int
 *
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum1;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 = sum1 + a[i];
			}
		}
	}
	printf("%d", sum1);
}
