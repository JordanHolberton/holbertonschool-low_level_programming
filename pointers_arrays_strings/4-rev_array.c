#include "main.h"
/**
 * reverse_array: function that reverses the content of an array of integers
 * @a: an array of integers
 * @n: the nulber if elements to swap
 * Return:  0
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = n - 1;

	for (i = 0; i < j; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}
