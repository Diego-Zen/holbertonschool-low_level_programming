#include "function_pointers.h"
/**
 * array_iterator - executes a function on each element of n array
 *
 * @array: array of integers
 * @size: size of the array
 * @action: function
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL || action != NULL)
	{

		unsigned int i;

		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
