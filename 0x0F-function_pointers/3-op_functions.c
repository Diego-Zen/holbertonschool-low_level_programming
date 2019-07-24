#include "function_pointers.h"
/**
 * int_index - searches for an integer
 *
 * @array: array of integers
 * @size: numbers of elements of the array
 * @cmp: function
 *
 * Return: integer value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
		{
			return (-1);
		}
		else
		{
			int i;

			for (i = 0; i < size; i++)
			{
				if ((*cmp)(array[i]))
					return (i);
			}
		}
	}
	return (-1);
}
