#include "function_pointers.h"

/**
 * int_index - search integer
 * @array: holds elements
 * @size: no of elements
 * @cmp: compare values
 * Return: the first element
 * no match return -1
 * size <= 0 return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
