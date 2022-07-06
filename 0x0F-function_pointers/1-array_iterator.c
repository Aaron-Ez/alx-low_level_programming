#include <stdio.h>

/**
 * array_iterator - runs function
 * @array: holds elements in array
 * @size: array size
 * @action: points to the function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{;

	if (array && size && action)
	{
		for (int i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
