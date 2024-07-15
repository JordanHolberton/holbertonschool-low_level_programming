#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - function that searches for an integer
 * @array: to search in
 * @size: number of elements in the array
 * @cmp: function to use for compare array
 *
 * Return: index of the first element for which
 * the cmp function does not return 0, or -1 if no match is found
 * or size is negative
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
