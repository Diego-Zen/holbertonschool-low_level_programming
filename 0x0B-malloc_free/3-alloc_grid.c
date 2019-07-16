#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - pointer to a 2 dimensional array of integers
 *
 * @width: integer
 * @height: integer
 *
 * Return: pointer or null
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **s;

	if (width == 0 || height == 0)
	{
		return ('\0');
	}

	s = malloc((width * height) * sizeof(int));

	if (s == NULL)
	{
		return ('\0');
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			s[i] = 0;
		}
		return (s);
	}
	free(s);
}
