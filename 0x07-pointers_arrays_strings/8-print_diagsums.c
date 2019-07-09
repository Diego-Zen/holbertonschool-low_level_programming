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
	int sum1 = 0;
	int sum2 = 0;
	int totalsize = size * size;

	for (i = 0; i < totalsize; i = i + (size + 1))
	{
		sum1 = sum1 + a[i];
	}
	for (i = size - 1; i < totalsize - 1; i = i + (size - 1))
	{
		sum2 = sum2 + a[i];
	}
	printf("%d, %d\n", sum1, sum2);
}
