#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: square matrix of which we print the sum of diagonals
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int i;

	unsigned int j, k;

	j = 0;
	k = 0;

	for (i = 0; i < size; i++)
	{
		j += a[(size * 1) + i];
		k += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d\n", j, k);
}