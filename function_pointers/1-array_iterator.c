#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: array to iterate
 * @size: size of the array
 * @action: pointer to function used
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

		for (i = 0; i < size; i++)
			action(array[i]);
}
